<?php
/**
 * @file
 * news_display.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function news_display_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_news-items:node/add/news-items
  $menu_links['navigation_news-items:node/add/news-items'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/news-items',
    'router_path' => 'node/add/news-items',
    'link_title' => 'News Items',
    'options' => array(
      'attributes' => array(
        'title' => 'News items, announcements, workshop details, upcoming events, council meeting notices, AGM notices, Courses etc',
      ),
      'identifier' => 'navigation_news-items:node/add/news-items',
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
  t('News Items');


  return $menu_links;
}
