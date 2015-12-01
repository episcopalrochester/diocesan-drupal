<?php
/**
 * @file
 * diocesan_front_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function diocesan_front_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function diocesan_front_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function diocesan_front_page_node_info() {
  $items = array(
    'front_page_highlights' => array(
      'name' => t('Front Page Highlights'),
      'base' => 'node_content',
      'description' => t('Add a highlight to the middle of the front page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('Add a slide to the front page carousel.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
