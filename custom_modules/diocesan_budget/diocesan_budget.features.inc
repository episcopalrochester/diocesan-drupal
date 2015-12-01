<?php
/**
 * @file
 * diocesan_budget.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function diocesan_budget_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function diocesan_budget_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function diocesan_budget_node_info() {
  $items = array(
    'budget' => array(
      'name' => t('Budget Draft'),
      'base' => 'node_content',
      'description' => t('Post a new budget draft (by year)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
