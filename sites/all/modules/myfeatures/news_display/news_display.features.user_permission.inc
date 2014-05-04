<?php
/**
 * @file
 * news_display.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function news_display_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create news_items content'.
  $permissions['create news_items content'] = array(
    'name' => 'create news_items content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_items content'.
  $permissions['delete any news_items content'] = array(
    'name' => 'delete any news_items content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_items content'.
  $permissions['delete own news_items content'] = array(
    'name' => 'delete own news_items content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in news_types'.
  $permissions['delete terms in news_types'] = array(
    'name' => 'delete terms in news_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any news_items content'.
  $permissions['edit any news_items content'] = array(
    'name' => 'edit any news_items content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_items content'.
  $permissions['edit own news_items content'] = array(
    'name' => 'edit own news_items content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in news_types'.
  $permissions['edit terms in news_types'] = array(
    'name' => 'edit terms in news_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
