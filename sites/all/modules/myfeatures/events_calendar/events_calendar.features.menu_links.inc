<?php
/**
 * @file
 * events_calendar.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function events_calendar_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_events:node/add/events
  $menu_links['navigation_events:node/add/events'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/events',
    'router_path' => 'node/add/events',
    'link_title' => 'events',
    'options' => array(
      'attributes' => array(
        'title' => 'events for calendar',
      ),
      'identifier' => 'navigation_events:node/add/events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('events');


  return $menu_links;
}
