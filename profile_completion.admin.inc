<?php

/**
 * Configuration form for the Profile Completion module.
 */
function profile_completion_settings_form($form, &$form_state) {
  $form = [];

  // Get all available user fields.
  $user_fields = field_info_instances('user', 'user');
  $field_options = [];
  $field_options['user_picture'] = t('Profile picture (User)');
  foreach ($user_fields as $field_name => $field) {
    $field_options[$field_name] = $field['label'] . ' (' . t('User') . ')';
  }

  // Debug: Show available fields.
  if (function_exists('dpm') && module_exists('devel')) {
    dpm($field_options, 'Debug: Available fields in the form');
  }

  // Field selection.
  $form['profile_completion_fields'] = [
    '#type' => 'checkboxes',
    '#title' => t('Fields to calculate profile completion'),
    '#options' => $field_options,
    '#default_value' => config_get('profile_completion.settings', 'profile_completion_fields', []),
    '#description' => t('Select the fields that will be used to calculate profile completion for all users.'),
  ];

  // Save the configuration.
  $form['#submit'][] = 'profile_completion_settings_form_submit';

  return system_settings_form($form);
}

/**
 * Custom submit function to save the selected fields.
 */
function profile_completion_settings_form_submit($form, &$form_state) {
  $fields = array_filter($form_state['values']['profile_completion_fields']);

  // Save the selected fields.
  $config = config('profile_completion.settings');
  $config->set('profile_completion_fields', $fields);
  $config->save();

  // Debug: Confirm that the fields were saved.
  if (function_exists('dpm') && module_exists('devel')) {
    dpm($fields, 'Debug: Saved fields');
  }
}
