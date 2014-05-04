<?php
/**
 * @file
 * council_members.features.inc
 */

/**
 * Implements hook_views_api().
 */
function council_members_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function council_members_node_info() {
  $items = array(
    'council_member' => array(
      'name' => t('Council Member'),
      'base' => 'node_content',
      'description' => t('way to add council members'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
