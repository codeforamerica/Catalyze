<?php
/**
 * @file
 * project_assessment.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function project_assessment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => 1);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function project_assessment_node_info() {
  $items = array(
    'assessment' => array(
      'name' => t('Assessment'),
      'base' => 'node_content',
      'description' => t('This is an assessment for a project or approach to a problem. Volunteer Civic Matchmakers can use this form to conduct interviews of people who are experiencing a problem in their city. The problem should be broken into a task with a clear outcome. For example: "Our client wants to feel more safe in their neighborhood in one month." or "Our neighborhood wants to make our park nicer by organizing a cleanup on June 10." Our civic matchmakers volunteer to help people talk through their problems, and translate these problems so that the problems get that much closer to being solved.'),
      'has_title' => '1',
      'title_label' => t('What do you want to call this project?'),
      'help' => '',
    ),
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
