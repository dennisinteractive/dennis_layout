<?php
/**
 * @file
 * expertreviews_layout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dennis_layout_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'deactivate sidebar'.
  $permissions['deactivate sidebar'] = array(
    'name' => 'deactivate sidebar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dennis_layout',
  );

  return $permissions;
}
