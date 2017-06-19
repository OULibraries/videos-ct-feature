<?php
/**
 * @file
 * videos_ct_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function videos_ct_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function videos_ct_feature_node_info() {
  $items = array(
    'videos' => array(
      'name' => t('Videos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Video Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
