<?php
/**
 * @file
 * diocesan_budget.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function diocesan_budget_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'budget';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Budget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Budget';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_tab_plugin_style';
  $handler->display->display_options['style_options']['tab_field'] = 'title';
  $handler->display->display_options['style_options']['justified'] = 0;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Letters */
  $handler->display->display_options['fields']['field_letters']['id'] = 'field_letters';
  $handler->display->display_options['fields']['field_letters']['table'] = 'field_data_field_letters';
  $handler->display->display_options['fields']['field_letters']['field'] = 'field_letters';
  $handler->display->display_options['fields']['field_letters']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_letters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_letters']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_letters']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_letters']['settings'] = array(
    'node_reference_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_letters']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_letters']['separator'] = '<br />';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_budget_status']['id'] = 'field_budget_status';
  $handler->display->display_options['fields']['field_budget_status']['table'] = 'field_data_field_budget_status';
  $handler->display->display_options['fields']['field_budget_status']['field'] = 'field_budget_status';
  $handler->display->display_options['fields']['field_budget_status']['label'] = '';
  $handler->display->display_options['fields']['field_budget_status']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_budget_status']['element_label_colon'] = FALSE;
  /* Field: Content: Files */
  $handler->display->display_options['fields']['field_files']['id'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['table'] = 'field_data_field_files';
  $handler->display->display_options['fields']['field_files']['field'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['label'] = 'Budget Documents';
  $handler->display->display_options['fields']['field_files']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_files']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_files']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Budget Draft';
  /* Sort criterion: Content: Status (field_budget_status) */
  $handler->display->display_options['sorts']['field_budget_status_value']['id'] = 'field_budget_status_value';
  $handler->display->display_options['sorts']['field_budget_status_value']['table'] = 'field_data_field_budget_status';
  $handler->display->display_options['sorts']['field_budget_status_value']['field'] = 'field_budget_status_value';
  $handler->display->display_options['sorts']['field_budget_status_value']['order'] = 'DESC';
  /* Sort criterion: Content: Draft (field_draft) */
  $handler->display->display_options['sorts']['field_draft_value']['id'] = 'field_draft_value';
  $handler->display->display_options['sorts']['field_draft_value']['table'] = 'field_data_field_draft';
  $handler->display->display_options['sorts']['field_draft_value']['field'] = 'field_draft_value';
  $handler->display->display_options['sorts']['field_draft_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Year (field_year) */
  $handler->display->display_options['arguments']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['arguments']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['arguments']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['arguments']['field_year_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_year_value']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_year_value']['title'] = '%1 Diocesan Budget';
  $handler->display->display_options['arguments']['field_year_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_year_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_year_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_year_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_year_value']['limit'] = '0';
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
    'budget' => 'budget',
  );

  /* Display: Page - Draft Budget w/ History */
  $handler = $view->new_display('page', 'Page - Draft Budget w/ History', 'page');
  $handler->display->display_options['path'] = 'budget/drafts/%';

  /* Display: Block - Latest Budget Draft */
  $handler = $view->new_display('block', 'Block - Latest Budget Draft', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Block - Latest Approved Budget */
  $handler = $view->new_display('block', 'Block - Latest Approved Budget', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Files */
  $handler->display->display_options['fields']['field_files']['id'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['table'] = 'field_data_field_files';
  $handler->display->display_options['fields']['field_files']['field'] = 'field_files';
  $handler->display->display_options['fields']['field_files']['label'] = '';
  $handler->display->display_options['fields']['field_files']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_files']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_files']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Budget Draft';
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
    'budget' => 'budget',
  );
  /* Filter criterion: Content: Status (field_budget_status) */
  $handler->display->display_options['filters']['field_budget_status_value']['id'] = 'field_budget_status_value';
  $handler->display->display_options['filters']['field_budget_status_value']['table'] = 'field_data_field_budget_status';
  $handler->display->display_options['filters']['field_budget_status_value']['field'] = 'field_budget_status_value';
  $handler->display->display_options['filters']['field_budget_status_value']['value'] = array(
    2 => '2',
    3 => '3',
  );
  $export['budget'] = $view;

  return $export;
}
