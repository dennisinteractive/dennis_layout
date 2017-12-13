<?php
/**
 * @file
 * dennis_layout.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function dennis_layout_field_default_field_bases() {
  $field_bases = [];

  // Exported field_base: 'field_sidebar_off'.
  $field_bases['field_sidebar_off'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sidebar_off',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
