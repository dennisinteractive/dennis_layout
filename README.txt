
Module: Dennis Layout

Description
===========
Provides the ability to turn the sidebar off via a disable field (context)


Installation
============
Copy the 'dennis_layout' module directory in to your Drupal:
/sites/all/modules directory as usual.

Dependencies
============
Flags and Context Flags

Usage
=====
The module creates a disable_sidebar flag and context.

Content types are article and review by default, but can be set using variable dennis_layout_flag_disable_content_types.

Default regions to be disabled are:
'sidebar_first',
'sidebar_first_alt',
'sidebar_second',
'sidebar_second_alt'
