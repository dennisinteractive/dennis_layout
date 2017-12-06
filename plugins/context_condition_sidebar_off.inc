<?php

/**
 * @file
 * Implement context condition class for sidebar deactivation node field value.
 */

class context_condition_sidebar_off extends context_condition {

  /**
   * Condition values.
   */
  function condition_values() {
    return array(1 => t('Enable this context.'));
  }

  /**
   * Context editor form for conditions.
   */
  function editor_form($context = NULL) {
    $form = parent::editor_form($context);
    $form[1]['#title'] = t('Sidebar deactivation field checked.');
    $form['#weight'] = -10;
    return $form;
  }

  /**
   * Execute.
   */
  function execute($node) {
    foreach ($this->get_contexts() as $context) {
      if (current_path() == 'node/' . $node->nid) {
        if (dennis_layout_sidebar_off($node)) {
          $this->condition_met($context);
        }
      }
    }
  }
}
