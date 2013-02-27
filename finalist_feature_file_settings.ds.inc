<?php
/**
 * @file
 * finalist_feature_file_settings.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function finalist_feature_file_settings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'large';
  $ds_view_mode->label = 'Groot';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['large'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'medium';
  $ds_view_mode->label = 'Klein';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['medium'] = $ds_view_mode;

  return $export;
}
