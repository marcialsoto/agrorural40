<?php
/**
 * @file
 * oa_mailhandler.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function oa_mailhandler_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'comment_reply_email_importer';
  $feeds_importer->config = array(
    'name' => 'Comment reply email importer',
    'description' => 'Imports email replies to content with comments as comments',
    'fetcher' => array(
      'plugin_key' => 'MailhandlerFetcher',
      'config' => array(
        'filter' => 'OaMailhandlerFiltersComments',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'OaMailParser',
      'config' => array(
        'available_commands' => 'status',
        'authenticate_plugin' => 'MailhandlerAuthenticateDefault',
        'extended_headers' => NULL,
        'require_contextual_nid' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsCommentProcessor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'authenticated_uid',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'body_text',
            'target' => 'comment',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'parent_nid',
            'target' => 'nid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'parent_cid',
            'target' => 'pid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'status',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => FALSE,
        'bundle' => NULL,
        'expire' => '-1',
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 0,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['comment_reply_email_importer'] = $feeds_importer;

  return $export;
}
