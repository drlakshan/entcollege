<?php
/**
 * @file
 * events_calendar.features.inc
 */

/**
 * Implements hook_views_api().
 */
function events_calendar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function events_calendar_node_info() {
  $items = array(
    'events' => array(
      'name' => t('events'),
      'base' => 'node_content',
      'description' => t('events for calendar'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
