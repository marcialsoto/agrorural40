<?php
/**
 * @file
 * oa_wiki.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function oa_wiki_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-oa_wiki_page-body'
  $field_instances['node-oa_wiki_page-body'] = array(
    'bundle' => 'oa_wiki_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the content of the document or wiki here.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-oa_wiki_page-field_oa_media'
  $field_instances['node-oa_wiki_page-field_oa_media'] = array(
    'bundle' => 'oa_wiki_page',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'teaser',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oa_media',
    'label' => 'Attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 'vimeo',
          'youtube' => 'youtube',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 'document',
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => TRUE,
        'manualcrop_default_crop_area' => TRUE,
        'manualcrop_enable' => FALSE,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => TRUE,
        'manualcrop_keyboard' => TRUE,
        'manualcrop_maximize_default_crop_area' => FALSE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => FALSE,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-oa_wiki_page-field_oa_wiki_page_no_redirect'
  $field_instances['node-oa_wiki_page-field_oa_wiki_page_no_redirect'] = array(
    'bundle' => 'oa_wiki_page',
    'comment_alter' => 0,
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If checked, show the node detail page (Drupal default behavior).  If unchecked, show the first file attachment.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oa_wiki_page_no_redirect',
    'label' => 'Show page instead of file?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-oa_wiki_page-oa_other_spaces_ref'
  $field_instances['node-oa_wiki_page-oa_other_spaces_ref'] = array(
    'bundle' => 'oa_wiki_page',
    'comment_alter' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select a list of additional Spaces that this piece of content should be visible in. This <em>doesn\'t</em> affect access control - users in the other Spaces must have access to see this content in it\'s main Space for it to be visible to them at all.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 6,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'oa_other_spaces_ref',
    'label' => 'Visible in other Spaces',
    'options_limit' => 0,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(
      'body' => 0,
    ),
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'access_override' => 0,
          'admin' => array(
            'widget_settings' => array(
              'match_operator' => 'CONTAINS',
              'size' => 60,
            ),
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_settings' => array(
              'select2widgetajax' => array(
                'match_operator' => 'CONTAINS',
                'min_char' => 0,
                'view_mode' => 'teaser',
                'width' => '100%',
              ),
            ),
            'widget_type' => 'select2widgetajax',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-oa_wiki_page-oa_section_ref'
  $field_instances['node-oa_wiki_page-oa_section_ref'] = array(
    'bundle' => 'oa_wiki_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'oa_section_ref',
    'label' => 'Section',
    'options_limit' => 1,
    'options_limit_empty_behaviour' => 1,
    'options_limit_fields' => array(
      'body' => 0,
      'oa_section_ref' => 0,
      'og_group_ref' => 'og_group_ref',
    ),
    'options_optomize_entityreferences' => 1,
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-oa_wiki_page-og_group_ref'
  $field_instances['node-oa_wiki_page-og_group_ref'] = array(
    'bundle' => 'oa_wiki_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Groups audience',
    'required' => FALSE,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'access_override' => 1,
          'admin' => array(
            'widget_settings' => array(
              'select2widgetajax' => array(
                'match_operator' => 'CONTAINS',
                'min_char' => 1,
                'view_mode' => 'teaser',
                'width' => '100%',
              ),
            ),
            'widget_type' => 'select2widgetajax',
          ),
          'default' => array(
            'widget_settings' => array(
              'select2widgetajax' => array(
                'match_operator' => 'CONTAINS',
                'min_char' => 1,
                'view_mode' => 'teaser',
                'width' => '100%',
              ),
            ),
            'widget_type' => 'select2widgetajax',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-oa_wiki_page-og_vocabulary'
  $field_instances['node-oa_wiki_page-og_vocabulary'] = array(
    'bundle' => 'oa_wiki_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_vocab',
        'settings' => array(
          'concatenate' => FALSE,
        ),
        'type' => 'og_vocab',
        'weight' => 5,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'og_vocab',
        'settings' => array(
          'concatenate' => 1,
        ),
        'type' => 'og_vocab',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_vocabulary',
    'label' => 'OG vocabulary',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'og_vocab',
      'settings' => array(),
      'type' => 'og_vocab_complex',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');
  t('Body');
  t('Enter the content of the document or wiki here.');
  t('Groups audience');
  t('If checked, show the node detail page (Drupal default behavior).  If unchecked, show the first file attachment.');
  t('OG vocabulary');
  t('Section');
  t('Select a list of additional Spaces that this piece of content should be visible in. This <em>doesn\'t</em> affect access control - users in the other Spaces must have access to see this content in it\'s main Space for it to be visible to them at all.');
  t('Show page instead of file?');
  t('Visible in other Spaces');

  return $field_instances;
}
