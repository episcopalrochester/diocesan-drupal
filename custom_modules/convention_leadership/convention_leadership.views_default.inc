<?php
/**
 * @file
 * convention_leadership.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function convention_leadership_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'convention_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Convention List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Convention List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_convention_date']['id'] = 'field_convention_date';
  $handler->display->display_options['fields']['field_convention_date']['table'] = 'field_data_field_convention_date';
  $handler->display->display_options['fields']['field_convention_date']['field'] = 'field_convention_date';
  $handler->display->display_options['fields']['field_convention_date']['label'] = '';
  $handler->display->display_options['fields']['field_convention_date']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_convention_location']['id'] = 'field_convention_location';
  $handler->display->display_options['fields']['field_convention_location']['table'] = 'field_data_field_convention_location';
  $handler->display->display_options['fields']['field_convention_location']['field'] = 'field_convention_location';
  $handler->display->display_options['fields']['field_convention_location']['label'] = '';
  $handler->display->display_options['fields']['field_convention_location']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more...';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Sort criterion: Content: Convention Number (field_convention_number) */
  $handler->display->display_options['sorts']['field_convention_number_value']['id'] = 'field_convention_number_value';
  $handler->display->display_options['sorts']['field_convention_number_value']['table'] = 'field_data_field_convention_number';
  $handler->display->display_options['sorts']['field_convention_number_value']['field'] = 'field_convention_number_value';
  $handler->display->display_options['sorts']['field_convention_number_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'convention' => 'convention',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'conventions';
  $export['convention_list'] = $view;

  $view = new view();
  $view->name = 'convention_updates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Convention Updates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Convention News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'draggableviews' => 'draggableviews',
    'field_image_teaser' => 'field_image_teaser',
    'title' => 'title',
    'field_convention_page_summary' => 'title',
    'view_node' => 'title',
    'field_convention_update_body' => 'field_convention_update_body',
    'views_conditional' => 'title',
    'edit_node' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_teaser' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_convention_page_summary' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_convention_update_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_conditional' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Save Order';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Teaser image */
  $handler->display->display_options['fields']['field_image_teaser']['id'] = 'field_image_teaser';
  $handler->display->display_options['fields']['field_image_teaser']['table'] = 'field_data_field_image_teaser';
  $handler->display->display_options['fields']['field_image_teaser']['field'] = 'field_image_teaser';
  $handler->display->display_options['fields']['field_image_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_image_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_teaser']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_teaser']['settings'] = array(
    'image_style' => 'convention_update',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Convention Page Summary */
  $handler->display->display_options['fields']['field_convention_page_summary']['id'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['table'] = 'field_data_field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['field'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['label'] = '';
  $handler->display->display_options['fields']['field_convention_page_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More &raquo;';
  /* Field: Content: Provide link to full page on Convention page */
  $handler->display->display_options['fields']['field_convention_link']['id'] = 'field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['table'] = 'field_data_field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['field'] = 'field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['label'] = '';
  $handler->display->display_options['fields']['field_convention_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convention_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_convention_link']['type'] = 'list_key';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_convention_link';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[view_node]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'highlights:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Contextual filter: Content: Convention (field_convention) */
  $handler->display->display_options['arguments']['field_convention_nid']['id'] = 'field_convention_nid';
  $handler->display->display_options['arguments']['field_convention_nid']['table'] = 'field_data_field_convention';
  $handler->display->display_options['arguments']['field_convention_nid']['field'] = 'field_convention_nid';
  $handler->display->display_options['arguments']['field_convention_nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_convention_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_convention_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_convention_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_convention_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'convention_update' => 'convention_update',
  );
  /* Filter criterion: Content: Convention Page Section (field_convention_page_section) */
  $handler->display->display_options['filters']['field_convention_page_section_value']['id'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['table'] = 'field_data_field_convention_page_section';
  $handler->display->display_options['filters']['field_convention_page_section_value']['field'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['value'] = array(
    'General Updates' => 'General Updates',
  );

  /* Display: General Updates */
  $handler = $view->new_display('block', 'General Updates', 'block');

  /* Display: Election Results */
  $handler = $view->new_display('block', 'Election Results', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Convention Page Summary */
  $handler->display->display_options['fields']['field_convention_page_summary']['id'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['table'] = 'field_data_field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['field'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['label'] = '';
  $handler->display->display_options['fields']['field_convention_page_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More &raquo;';
  /* Field: Content: Provide link to full page on Convention page */
  $handler->display->display_options['fields']['field_convention_link']['id'] = 'field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['table'] = 'field_data_field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['field'] = 'field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['label'] = '';
  $handler->display->display_options['fields']['field_convention_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convention_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_convention_link']['type'] = 'list_key';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_convention_link';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[view_node]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'convention_update' => 'convention_update',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Convention Page Section (field_convention_page_section) */
  $handler->display->display_options['filters']['field_convention_page_section_value']['id'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['table'] = 'field_data_field_convention_page_section';
  $handler->display->display_options['filters']['field_convention_page_section_value']['field'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['value'] = array(
    'Election Results' => 'Election Results',
  );
  $handler->display->display_options['filters']['field_convention_page_section_value']['group'] = 1;

  /* Display: Photo Grid */
  $handler = $view->new_display('block', 'Photo Grid', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<hr /><h2>Photo Galleries</h2>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Convention Page Summary */
  $handler->display->display_options['fields']['field_convention_page_summary']['id'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['table'] = 'field_data_field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['field'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['label'] = '';
  $handler->display->display_options['fields']['field_convention_page_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convention_page_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_convention_page_summary']['type'] = 'text_plain';
  /* Field: Content: Teaser image */
  $handler->display->display_options['fields']['field_image_teaser']['id'] = 'field_image_teaser';
  $handler->display->display_options['fields']['field_image_teaser']['table'] = 'field_data_field_image_teaser';
  $handler->display->display_options['fields']['field_image_teaser']['field'] = 'field_image_teaser';
  $handler->display->display_options['fields']['field_image_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_image_teaser']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_teaser']['alter']['path'] = '[field_convention_page_summary] ';
  $handler->display->display_options['fields']['field_image_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_teaser']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_teaser']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_convention_page_summary] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'convention_update' => 'convention_update',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Convention Page Section (field_convention_page_section) */
  $handler->display->display_options['filters']['field_convention_page_section_value']['id'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['table'] = 'field_data_field_convention_page_section';
  $handler->display->display_options['filters']['field_convention_page_section_value']['field'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['value'] = array(
    'Photo Gallery Grid' => 'Photo Gallery Grid',
  );
  $handler->display->display_options['filters']['field_convention_page_section_value']['group'] = 1;

  /* Display: Resolutions */
  $handler = $view->new_display('block', 'Resolutions', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resolutions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<hr /><h2>Resolutions</h2>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Convention Page Summary */
  $handler->display->display_options['fields']['field_convention_page_summary']['id'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['table'] = 'field_data_field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['field'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['label'] = '';
  $handler->display->display_options['fields']['field_convention_page_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More &raquo;';
  /* Field: Content: Provide link to full page on Convention page */
  $handler->display->display_options['fields']['field_convention_link']['id'] = 'field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['table'] = 'field_data_field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['field'] = 'field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['label'] = '';
  $handler->display->display_options['fields']['field_convention_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convention_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_convention_link']['type'] = 'list_key';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_convention_link';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[view_node]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'convention_update' => 'convention_update',
  );
  /* Filter criterion: Content: Convention Page Section (field_convention_page_section) */
  $handler->display->display_options['filters']['field_convention_page_section_value']['id'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['table'] = 'field_data_field_convention_page_section';
  $handler->display->display_options['filters']['field_convention_page_section_value']['field'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['value'] = array(
    'Resolutions' => 'Resolutions',
  );

  /* Display: Documents */
  $handler = $view->new_display('block', 'Documents', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<hr /><h2>Documents for Delegates</h2>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Convention Page Summary */
  $handler->display->display_options['fields']['field_convention_page_summary']['id'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['table'] = 'field_data_field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['field'] = 'field_convention_page_summary';
  $handler->display->display_options['fields']['field_convention_page_summary']['label'] = '';
  $handler->display->display_options['fields']['field_convention_page_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More &raquo;';
  /* Field: Content: Provide link to full page on Convention page */
  $handler->display->display_options['fields']['field_convention_link']['id'] = 'field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['table'] = 'field_data_field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['field'] = 'field_convention_link';
  $handler->display->display_options['fields']['field_convention_link']['label'] = '';
  $handler->display->display_options['fields']['field_convention_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_convention_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_convention_link']['type'] = 'list_key';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_convention_link';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[view_node]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'convention_update' => 'convention_update',
  );
  /* Filter criterion: Content: Convention Page Section (field_convention_page_section) */
  $handler->display->display_options['filters']['field_convention_page_section_value']['id'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['table'] = 'field_data_field_convention_page_section';
  $handler->display->display_options['filters']['field_convention_page_section_value']['field'] = 'field_convention_page_section_value';
  $handler->display->display_options['filters']['field_convention_page_section_value']['value'] = array(
    'Documents for Delegates' => 'Documents for Delegates',
  );
  $export['convention_updates'] = $view;

  $view = new view();
  $view->name = 'leadership_minutes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Leadership Minutes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meeting Minutes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'day_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Files */
  $handler->display->display_options['fields']['field_files']['id'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['table'] = 'field_data_field_files';
  $handler->display->display_options['fields']['field_files']['field'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['label'] = '';
  $handler->display->display_options['fields']['field_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_files']['multi_type'] = 'ul';
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Committee (field_committee) */
  $handler->display->display_options['arguments']['field_committee_nid']['id'] = 'field_committee_nid';
  $handler->display->display_options['arguments']['field_committee_nid']['table'] = 'field_data_field_committee';
  $handler->display->display_options['arguments']['field_committee_nid']['field'] = 'field_committee_nid';
  $handler->display->display_options['arguments']['field_committee_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_committee_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_committee_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_committee_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_committee_nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['leadership_minutes'] = $view;

  return $export;
}
