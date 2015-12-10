<?php

$nids = array();
$result = db_query("SELECT nid FROM node");
foreach ($result as $record) {
  $nids[] = $record->nid;
}

foreach ($nids as $nid) {
  $node = node_load($nid);
  if (!isset($node->field_images['und'])) {
    $node->field_images['und'] = array();
  }
  if (!isset($node->field_files['und'])) {
    $node->field_files['und'] = array();
  }
  $body = new DOMDocument();
  $body->loadHTML($node->body['und'][0]['value']);

  // Scrape all images
  $images = $body->getElementsByTagName('img');
  foreach ($images as $image) {
    $src = $image->getAttribute("src");
    if (amazon_check($src)) {
      $file = save_amazon_file($src);
      $node->field_images['und'][] = array(
        'fid' => $file->fid,
        'display' => 1,
        'description' => '',
      );
      $node->body['und'][0]['value'] = replace_body_url($src,$file,$node->body['und'][0]['value']); 
    }
  }

  // Scrape all links
  $files = $body->getElementsByTagName('a');
  foreach ($files as $file) {
    $href = $file->getAttribute("href");
    if (amazon_check($href)) {
      $file = save_amazon_file($href);
      $node->field_files['und'][] = array(
        'fid' => $file->fid,
        'display' => 1,
        'description' => '',
      );
      $node->body['und'][0]['value'] = replace_body_url($href,$file,$node->body['und'][0]['value']); 
    }
  } 
  node_save($node);
}

function amazon_check($url) {
  if (strpos($url,"amazonaws") > 0) {
    return true;
  }
  return false;
}

function save_amazon_file($url) {
  $file = file_save_data(file_get_contents($url), file_default_scheme().'://dfmigrated/'.basename($url));
  $file->uid = 1;
  return $file;
}

function replace_body_url($url,$file,$body) {
  $body = str_replace($url,"/sites/default/files/".file_uri_target($file->uri),$body);
  return $body;
}
