<?php
/**
 * @file
 * bishop_s_writings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bishop_s_writings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bishop_s_writings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bishop_s_writings_node_info() {
  $items = array(
    'bishop_s_writings' => array(
      'name' => t('Bishop\'s Writings'),
      'base' => 'node_content',
      'description' => t('Add a post to the "Bishop\'s Writings" section of the website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
