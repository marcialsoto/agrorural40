; Open Atrium Core Makefile

api = 2
core = 7.x

; Advagg
projects[advagg][version] = 2.6
projects[advagg][subdir] = contrib

; Chosen
projects[chosen][version] = 2.x-dev
projects[chosen][subdir] = contrib
projects[chosen][download][type] = git
projects[chosen][download][branch] = 7.x-2.x
projects[chosen][download][revision] = c48c8a

libraries[chosen][download][type] = "get"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/releases/download/1.0.0/chosen_v1.0.0.zip"
libraries[chosen][directory_name] = "chosen"
libraries[chosen][destination] = "libraries"

; Colorizer
projects[colorizer][version] = 1.7
projects[colorizer][subdir] = contrib

; Conditional Fields
projects[conditional_fields][version] = 3.x-dev
projects[conditional_fields][subdir] = contrib
projects[conditional_fields][download][type] = git
projects[conditional_fields][download][branch] = 7.x-3.x
projects[conditional_fields][download][revision] = cd29b00
projects[conditional_fields][patch][1982276] = http://drupal.org/files/conditional_fields-typo-in-if-condition-1982276-1.patch
projects[conditional_fields][patch][2027307] = https://www.drupal.org/files/issues/2027307-conditional_fields-export-clean-3.patch
projects[conditional_fields][patch][1916988] = http://drupal.org/files/1916988-conditional-fields-alter-3.patch
projects[conditional_fields][patch][1542706] = http://drupal.org/files/issues/conditional-fields-1542706-values-not-saving-72.patch
projects[conditional_fields][patch][2362507] = https://www.drupal.org/files/issues/2362507-conditional_fields-export-1.patch

; Conditional Style Sheets
projects[conditional_styles][version] = 2.2
projects[conditional_styles][subdir] = contrib

; Date Facets
projects[date_facets][version] = 1.x-dev
projects[date_facets][subdir] = contrib
projects[date_facets][download][type] = git
projects[date_facets][download][branch] = 7.x-1.x
projects[date_facets][download][revision] = 9037608

; Diff
projects[diff][version] = 3.2
projects[diff][subdir] = contrib

; Features Template
projects[features_template][version] = 1.0-beta2
projects[features_template][subdir] = contrib

; Feeds - latest dev needed by date_ical v3.1
projects[feeds][version] = 2.x-dev
projects[feeds][subdir] = contrib
projects[feeds][download][type] = git
projects[feeds][download][branch] = 7.x-2.x
projects[feeds][download][revision] = a8468a
projects[feeds][patch][2223853] = http://drupal.org/files/issues/2223853-fix_installing_taxonomy_module-7_0.patch
projects[feeds][patch][2127787] = https://www.drupal.org/files/issues/2127787-feeds-feed_nid-3.patch

; SimplePie library used by Feeds
libraries[simplepie][download][type] = file
libraries[simplepie][download][url] = http://simplepie.org/downloads/simplepie_1.3.1.compiled.php
libraries[simplepie][download][filename] = simplepie.compiled.php
libraries[simplepie][directory_name] = simplepie

; Flag
projects[flag][version] = 2.x-dev
projects[flag][subdir] = contrib
projects[flag][download][type] = git
projects[flag][download][branch] = 7.x-2.x
projects[flag][download][revision] = b8d94e
projects[flag][patch][471212] = http://drupal.org/files/471212-14-flag-all-bundles.patch
projects[flag][patch][2027091] = http://drupal.org/files/flag-default-flags-alter-hook-2027091-03.patch

; HTML Mail
projects[htmlmail][version] = 2.65
projects[htmlmail][subdir] = contrib
projects[htmlmail][patch][1692966] = https://www.drupal.org/files/1692966-htmlmail-mailsystem-html-to-text.patch

; Job Scheduler
projects[job_scheduler][version] = 2.0-alpha3
projects[job_scheduler][subdir] = contrib

; Mail System
projects[mailsystem][version] = 2.34
projects[mailsystem][subdir] = contrib

; Message
projects[message][version] = 1.x-dev
projects[message][subdir] = contrib
projects[message][download][type] = git
projects[message][download][branch] = 7.x-1.x
projects[message][download][revision] = 3bbdd5e
projects[message][patch][2046591] = http://drupal.org/files/message-token_replace-2046591-1.patch
projects[message][patch][2040735] = http://drupal.org/files/message.target_bundles.2040735-3.patch

; Message Digest
projects[message_digest][version] = 1.0
projects[message_digest][subdir] = contrib

; Message Notify
projects[message_notify][version] = 2.5
projects[message_notify][subdir] = contrib

; Message Subscribe
projects[message_subscribe][version] = 1.0-rc1
projects[message_subscribe][subdir] = contrib
projects[message_subscribe][patch][2094129] = http://drupal.org/files/message_subscribe_empty_array_2094129_1.patch

; MimeMail
projects[mimemail][version] = 1.x-dev
projects[mimemail][subdir] = contrib
projects[mimemail][download][type] = git
projects[mimemail][download][branch] = 7.x-1.x
projects[mimemail][download][revision] = e742766

; OA Responsive Regions
projects[oa_responsive_regions][version] = 1.0-beta1
projects[oa_responsive_regions][subdir] = contrib

; Organic Groups
projects[og][version] = 2.7
projects[og][subdir] = contrib
; Related to Entity Reference revisions patch (1837650)
projects[og][patch][2363599] = http://drupal.org/files/issues/og-2363599-1-infinite-loop-entityreference-revisions-load.patch
; For select2widget configuration
projects[og][patch][2403619] = https://www.drupal.org/files/issues/2403619-og_widget_settings-1.patch
; Fix group manager regranted default
projects[og][patch][2411041] = https://www.drupal.org/files/issues/2411041-og-og_is_member-4-2.7-do-not-test.patch

; Og menu single
projects[og_menu_single][version] = 1.0-beta2
projects[og_menu_single][subdir] = contrib

; OG Session Context
projects[og_session_context][version] = 1.0-beta2
projects[og_session_context][subdir] = contrib

; Og Variables
projects[og_variables][version] = 1.0-beta2
projects[og_variables][subdir] = contrib

; Organic Groups Vocabulary
projects[og_vocab][version] = 1.2
projects[og_vocab][subdir] = contrib
; patch to support subgroups
projects[og_vocab][patch][2039009] = http://drupal.org/files/issues/2039009-allow-shared-vocabularies-13.patch
projects[og_vocab][patch][2399883] = https://www.drupal.org/files/issues/2399883-og_vocab-menuitem-2.patch

; Panels Custom Error
projects[panels_customerror][version] = 1.0
projects[panels_customerror][subdir] = contrib

; Paragraphs
projects[paragraphs][version] = 1.0-beta6
projects[paragraphs][subdir] = contrib
projects[paragraphs][patch][2399883] = https://www.drupal.org/files/issues/2394313-paragraphs-node_clone-9.patch
projects[paragraphs][patch][2458801] = https://www.drupal.org/files/issues/paragraphs-instructions_setting-2458801-9.patch
projects[paragraphs][patch][2481627] = https://www.drupal.org/files/issues/paragraphs-modal_targets_wrong_id-2481627-3.patch

; Real Name
projects[realname][version] = 1.2
projects[realname][subdir] = contrib

; Reference Option Limit
projects[reference_option_limit][version] = 1.x-dev
projects[reference_option_limit][subdir] = contrib
projects[reference_option_limit][download][type] = git
projects[reference_option_limit][download][branch] = 7.x-1.x
projects[reference_option_limit][download][revision] = 0ea5303
projects[reference_option_limit][patch][1986532] = https://www.drupal.org/files/issues/1986532-reference_option_limit-og-7.patch
projects[reference_option_limit][patch][1986526] = http://drupal.org/files/1986526_reference_option_limit_12.patch

; Select 2 Widget
projects[select2widget][version] = 2.5
projects[select2widget][subdir] = contrib
projects[select2widget][patch][2404143] = https://www.drupal.org/files/issues/2404143-select2widget-addclass-1.patch
projects[select2widget][patch][2404175] = https://www.drupal.org/files/issues/2404175-select2widget-og_complex-2.patch
projects[select2widget][patch][2405941] = https://www.drupal.org/files/issues/2405941-select2widget-ajaxreplace-1.patch
projects[select2widget][patch][2411707] = https://www.drupal.org/files/issues/2411707-select2-suggestions-2.patch
projects[select2widget][patch][2414409] = https://www.drupal.org/files/issues/2414409-select2widget-menu_access-2.patch
projects[select2widget][patch][2468545] = https://www.drupal.org/files/issues/2468545-select2widget-labels-1.patch
projects[select2widget][patch][2472697] = https://www.drupal.org/files/issues/support_for_quitemillis-2472697-2.patch

libraries[select2][download][type] = "get"
libraries[select2][download][url] = "https://github.com/ivaynberg/select2/archive/3.5.2.tar.gz"
libraries[select2][directory_name] = "select2"
libraries[select2][destination] = "libraries"

; Variable
projects[variable][version] = 2.3
projects[variable][subdir] = contrib

; Views Load More
projects[views_load_more][version] = 1.x-dev
projects[views_load_more][subdir] = contrib
projects[views_load_more][download][type] = git
projects[views_load_more][download][branch] = 7.x-1.x
projects[views_load_more][download][revision] = 28de384

; Ultimate Cron
projects[ultimate_cron][version] = 2.0-beta7
projects[ultimate_cron][subdir] = contrib

