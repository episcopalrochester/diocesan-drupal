<?php
/**
 * @file
 * diocesan_staff.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function diocesan_staff_taxonomy_default_vocabularies() {
  return array(
    'staff_departments' => array(
      'name' => 'Staff Departments',
      'machine_name' => 'staff_departments',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
