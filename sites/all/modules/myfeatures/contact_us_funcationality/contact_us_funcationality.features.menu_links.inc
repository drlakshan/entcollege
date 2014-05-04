<?php
/**
 * @file
 * contact_us_funcationality.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function contact_us_funcationality_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contact-us:contact
  $menu_links['main-menu_contact-us:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact US',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-us:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: management_contact-form:admin/structure/contact
  $menu_links['management_contact-form:admin/structure/contact'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/contact',
    'router_path' => 'admin/structure/contact',
    'link_title' => 'Contact form',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a system contact form and set up categories for the form to use.',
      ),
      'identifier' => 'management_contact-form:admin/structure/contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_email-contact-form-settings:admin/config/content/email
  $menu_links['management_email-contact-form-settings:admin/config/content/email'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/email',
    'router_path' => 'admin/config/content/email',
    'link_title' => 'Email Contact Form Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer flood control settings for email contact forms',
      ),
      'identifier' => 'management_email-contact-form-settings:admin/config/content/email',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: navigation_contact:contact
  $menu_links['navigation_contact:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'navigation_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Contact US');
  t('Contact form');
  t('Email Contact Form Settings');


  return $menu_links;
}
