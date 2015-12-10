<?php
/**
 * @file
 * database_sync.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function database_sync_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'parishes';
  $feeds_importer->config = array(
    'name' => 'Parishes',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'context' => array(
          'value' => '//node',
        ),
        'sources' => array(
          'name' => array(
            'name' => 'name',
            'value' => 'name',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'uuid' => array(
            'name' => 'uuid',
            'value' => 'uuid',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '2',
          ),
          'address' => array(
            'name' => 'address',
            'value' => 'address',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'city' => array(
            'name' => 'city',
            'value' => 'city',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '4',
          ),
          'state' => array(
            'name' => 'state',
            'value' => 'state',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
          'zip' => array(
            'name' => 'zip',
            'value' => 'zip',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '6',
          ),
          'phone' => array(
            'name' => 'phone',
            'value' => 'phone',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '7',
          ),
          'email' => array(
            'name' => 'email',
            'value' => 'email',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '8',
          ),
          'website' => array(
            'name' => 'website',
            'value' => 'website',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '9',
          ),
        ),
        'display_errors' => 0,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'use_tidy' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'uuid',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'address',
            'target' => 'locations:street',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'city',
            'target' => 'locations:city',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'state',
            'target' => 'locations:province',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'zip',
            'target' => 'locations:postal_code',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'city',
            'target' => 'field_city',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'phone',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'website',
            'target' => 'field_website',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'parish',
        'update_non_existent' => 'delete',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['parishes'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'prayers';
  $feeds_importer->config = array(
    'name' => 'Prayers',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'context' => array(
          'value' => '//node',
        ),
        'sources' => array(
          'name' => array(
            'name' => 'prayer',
            'value' => 'prayer',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'uuid' => array(
            'name' => 'uuid',
            'value' => 'uuid',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '2',
          ),
          'address' => array(
            'name' => 'type',
            'value' => 'type',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'title' => array(
            'name' => 'title',
            'value' => 'title',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '4',
          ),
        ),
        'display_errors' => 0,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'use_tidy' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'uuid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'address',
            'target' => 'field_type',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'name',
            'target' => 'field_prayer',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'prayer_request',
        'update_non_existent' => 'delete',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['prayers'] = $feeds_importer;

  return $export;
}
