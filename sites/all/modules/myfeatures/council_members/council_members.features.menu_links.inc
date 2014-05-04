<?php
/**
 * @file
 * council_members.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function council_members_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_council-of-the-college:college-council
  $menu_links['main-menu_council-of-the-college:college-council'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'college-council',
    'router_path' => 'college-council',
    'link_title' => 'Council of the College',
    'options' => array(
      'attributes' => array(
        'title' => 'Council',
      ),
      'identifier' => 'main-menu_council-of-the-college:college-council',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: navigation_council-member:node/add/council-member
  $menu_links['navigation_council-member:node/add/council-member'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/council-member',
    'router_path' => 'node/add/council-member',
    'link_title' => 'Council Member',
    'options' => array(
      'attributes' => array(
        'title' => 'way to add council members',
      ),
      'identifier' => 'navigation_council-member:node/add/council-member',
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
  t('Council Member');
  t('Council of the College');


  return $menu_links;
}
