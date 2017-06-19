<?php
/**
 * @file
 * videos_ct_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function videos_ct_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|videos|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_new_video',
      1 => 'field_picture',
      2 => 'title',
      3 => 'path',
      4 => 'redirect',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basic Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_basic|node|videos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|node|videos|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'videos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Display Settings',
    'weight' => '1',
    'children' => array(
      0 => 'field_favorite',
      1 => 'field_hp_carousel_start',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Display Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_settings|node|videos|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Info');
  t('Display Settings');

  return $field_groups;
}
