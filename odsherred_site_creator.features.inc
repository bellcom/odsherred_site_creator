<?php
/**
 * @file
 * odsherred_site_creator.features.inc
 */

/**
 * Implements hook_node_info().
 */
function odsherred_site_creator_node_info() {
  $items = array(
    'subsite' => array(
      'name' => t('Subsite'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
