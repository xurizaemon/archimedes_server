<?php
/**
 * @file
 * archimedes_server_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function archimedes_server_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function archimedes_server_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function archimedes_server_feature_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => t('A product is a solution composed of websites and documentation.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('A module, extension of theme that maybe a monitored component of a website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'website' => array(
      'name' => t('Website'),
      'base' => 'node_content',
      'description' => t('Dashboard view of a monitored website.'),
      'has_title' => '1',
      'title_label' => t('Website URL'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
