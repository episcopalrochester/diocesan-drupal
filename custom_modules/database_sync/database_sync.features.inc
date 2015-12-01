<?php
/**
 * @file
 * database_sync.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function database_sync_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function database_sync_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function database_sync_node_info() {
  $items = array(
    'parish' => array(
      'name' => t('Parish'),
      'base' => 'node_content',
      'description' => t('Automatically populated - do not use'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'prayer_request' => array(
      'name' => t('Prayer Request'),
      'base' => 'node_content',
      'description' => t('Automatically populated - do not use'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
