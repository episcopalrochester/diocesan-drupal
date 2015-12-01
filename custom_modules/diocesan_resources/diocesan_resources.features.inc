<?php
/**
 * @file
 * diocesan_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function diocesan_resources_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function diocesan_resources_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function diocesan_resources_node_info() {
  $items = array(
    'resource_list' => array(
      'name' => t('Resource List'),
      'base' => 'node_content',
      'description' => t('Add a resource list to the parish resoures/forms section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
