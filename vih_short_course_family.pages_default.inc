<?php
/**
 * @file
 * vih_short_course_family.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function vih_short_course_family_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Short Course Family',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'vih_short_course_family' => 'vih_short_course_family',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 7,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Video',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 4,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'introduction',
        ),
        'parent' => '4',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'picture',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'picture' => array(
        'type' => 'region',
        'title' => 'Picture',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      'introduction' => array(
        'type' => 'region',
        'title' => 'Introduction',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'information',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'information' => array(
        'type' => 'region',
        'title' => 'Information',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ec89ae4e-a7aa-4705-b1bc-4fdc3052da4f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-efd2da7f-e323-4171-a3e9-2149493db775';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'panopoly_image_spotlight',
        'image_link' => '',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'efd2da7f-e323-4171-a3e9-2149493db775';
    $display->content['new-efd2da7f-e323-4171-a3e9-2149493db775'] = $pane;
    $display->panels['middle'][0] = 'new-efd2da7f-e323-4171-a3e9-2149493db775';
    $pane = new stdClass();
    $pane->pid = 'new-2181f4ee-9aef-4c1f-bd45-3e4935f5201f';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_course_time';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2181f4ee-9aef-4c1f-bd45-3e4935f5201f';
    $display->content['new-2181f4ee-9aef-4c1f-bd45-3e4935f5201f'] = $pane;
    $display->panels['middle'][1] = 'new-2181f4ee-9aef-4c1f-bd45-3e4935f5201f';
    $pane = new stdClass();
    $pane->pid = 'new-72e1ba30-e0b9-47a6-8fe1-e942bf7b910b';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '%title %node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '72e1ba30-e0b9-47a6-8fe1-e942bf7b910b';
    $display->content['new-72e1ba30-e0b9-47a6-8fe1-e942bf7b910b'] = $pane;
    $display->panels['middle'][2] = 'new-72e1ba30-e0b9-47a6-8fe1-e942bf7b910b';
    $pane = new stdClass();
    $pane->pid = 'new-64db9aa3-961d-4348-99d9-01963b3d51d9';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_pictures';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'colorbox',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'colorbox_node_style' => 'vih_quarter_square',
        'colorbox_node_style_first' => '',
        'colorbox_image_style' => 'panopoly_image_full',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '64db9aa3-961d-4348-99d9-01963b3d51d9';
    $display->content['new-64db9aa3-961d-4348-99d9-01963b3d51d9'] = $pane;
    $display->panels['middle'][3] = 'new-64db9aa3-961d-4348-99d9-01963b3d51d9';
    $pane = new stdClass();
    $pane->pid = 'new-fe14c283-a6fe-494f-88cc-b3942f9a7c79';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'employees_context-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => 'Undervisere',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'vih_box_highlight',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'fe14c283-a6fe-494f-88cc-b3942f9a7c79';
    $display->content['new-fe14c283-a6fe-494f-88cc-b3942f9a7c79'] = $pane;
    $display->panels['middle'][4] = 'new-fe14c283-a6fe-494f-88cc-b3942f9a7c79';
    $pane = new stdClass();
    $pane->pid = 'new-5a8709aa-fb88-4d4d-91bd-2b2443afe0ee';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_vih_schedule';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'pdf_reader_file',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'pdf_width' => '600',
        'pdf_height' => '480',
        'renderer' => 'google',
        'download' => 1,
        'colorbox' => 0,
        'colorbox_link_text' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '5a8709aa-fb88-4d4d-91bd-2b2443afe0ee';
    $display->content['new-5a8709aa-fb88-4d4d-91bd-2b2443afe0ee'] = $pane;
    $display->panels['middle'][5] = 'new-5a8709aa-fb88-4d4d-91bd-2b2443afe0ee';
    $pane = new stdClass();
    $pane->pid = 'new-80ef6bcd-edeb-49c6-b093-8f0c401dd390';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'vih_lectures-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '80ef6bcd-edeb-49c6-b093-8f0c401dd390';
    $display->content['new-80ef6bcd-edeb-49c6-b093-8f0c401dd390'] = $pane;
    $display->panels['middle'][6] = 'new-80ef6bcd-edeb-49c6-b093-8f0c401dd390';
    $pane = new stdClass();
    $pane->pid = 'new-7683f10b-a7f1-4d37-9f2c-ae070142d626';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_golf_product';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'commerce_cart_add_to_cart_form',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'show_quantity' => 0,
        'default_quantity' => '1',
        'combine' => 1,
        'line_item_type' => 'vih_short_course_family',
        'show_single_product_attributes' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Tilmelding',
      'view_mode' => NULL,
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'vih_box_highlight',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '7683f10b-a7f1-4d37-9f2c-ae070142d626';
    $display->content['new-7683f10b-a7f1-4d37-9f2c-ae070142d626'] = $pane;
    $display->panels['middle'][7] = 'new-7683f10b-a7f1-4d37-9f2c-ae070142d626';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}
