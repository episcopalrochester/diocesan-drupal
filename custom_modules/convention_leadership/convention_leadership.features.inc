<?php
/**
 * @file
 * convention_leadership.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function convention_leadership_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function convention_leadership_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function convention_leadership_node_info() {
  $items = array(
    'convention' => array(
      'name' => t('Convention'),
      'base' => 'node_content',
      'description' => t('Add a new annual convention to the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'convention_update' => array(
      'name' => t('Convention Update'),
      'base' => 'node_content',
      'description' => t('Post an update to a particular convention (by year/convention number)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'leadership_group' => array(
      'name' => t('Leadership Group'),
      'base' => 'node_content',
      'description' => t('Add a leadership committee (e.g. Council) to the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'leadership_minutes' => array(
      'name' => t('Leadership Minutes'),
      'base' => 'node_content',
      'description' => t('Post minutes (by date and committee)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
