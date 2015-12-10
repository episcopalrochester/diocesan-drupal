<?php
/**
 * @file
 * diocesan_front_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function diocesan_front_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_redirect_path'.
  $field_bases['field_redirect_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_redirect_path',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 1024,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
