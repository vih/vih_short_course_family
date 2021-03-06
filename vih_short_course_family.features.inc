<?php
/**
 * @file
 * vih_short_course_family.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function vih_short_course_family_commerce_line_item_default_types() {
  $items = array(
    'vih_short_course_family' => array(
      'name' => 'VIH Short Course Family',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add product');

  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function vih_short_course_family_commerce_product_default_types() {
  $items = array(
    'vih_short_course_family' => array(
      'type' => 'vih_short_course_family',
      'name' => 'VIH Short Course Family',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_short_course_family_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_short_course_family_node_info() {
  $items = array(
    'vih_short_course_family' => array(
      'name' => t('Short Course Family'),
      'base' => 'node_content',
      'description' => t('Used for <em>family courses</em> where you have different age groups but no room types.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
