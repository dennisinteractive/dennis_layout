
Module: Dennis Layout

Description
===========
Provides the ability to turn the sidebar off via a disable field (context)


Installation
============
Copy the 'dennis_layout' module directory in to your Drupal:
/sites/all/modules directory as usual.

The module already provides a base field used in the sidebar deactivation context
and you can use the site agnostic functions provided in an update hook to add the field to the
content type(s) you want (dennis_layout_create_sidebar_deactivation_field()) as well as
enable the context by defining its tag, content types for the "node type" condition
and the regions that need to be disabled in the context reaction
(dennis_layout_create_sidebar_off_context()).
