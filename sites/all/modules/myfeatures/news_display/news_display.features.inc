<?php
/**
 * @file
 * news_display.features.inc
 */

/**
 * Implements hook_views_api().
 */
function news_display_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function news_display_image_default_styles() {
  $styles = array();

  // Exported image style: news_images.
  $styles['news_images'] = array(
    'name' => 'news_images',
    'label' => 'news images',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function news_display_node_info() {
  $items = array(
    'news_items' => array(
      'name' => t('News Items'),
      'base' => 'node_content',
      'description' => t('News items, announcements, workshop details, upcoming events, council meeting notices, AGM notices, Courses etc'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Please be brief and add necessary fields. '),
    ),
  );
  return $items;
}
