<?php
/**
 * @file
 * project_assessment.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function project_assessment_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analysis|node|assessment|default';
  $field_group->group_name = 'group_analysis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Analysis',
    'weight' => '3',
    'children' => array(
      0 => 'field_pledge',
      1 => 'field_analysis',
      2 => 'field_recommendation',
      3 => 'field_challenges',
      4 => 'field_specification',
      5 => 'field_goal',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => NULL,
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_analysis|node|assessment|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analysis|node|assessment|form';
  $field_group->group_name = 'group_analysis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Analysis',
    'weight' => '8',
    'children' => array(
      0 => 'field_pledge',
      1 => 'field_analysis',
      2 => 'field_challenges',
      3 => 'field_specification',
      4 => 'field_analysis_ideas',
      5 => 'field_analysis_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_analysis|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analysis|node|assessment|full';
  $field_group->group_name = 'group_analysis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Analysis',
    'weight' => '42',
    'children' => array(
      0 => 'field_pledge',
      1 => 'field_analysis',
      2 => 'field_specification',
      3 => 'field_next_steps',
      4 => 'field_analysis_ideas',
      5 => 'field_analysis_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_analysis|node|assessment|full'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_benefit|node|assessment|full';
  $field_group->group_name = 'group_benefit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Benefit',
    'weight' => '34',
    'children' => array(
      0 => 'field_urgency',
      1 => 'field_impact',
      2 => 'field_goal',
      3 => 'field_term_objectives',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_benefit|node|assessment|full'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|assessment|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_people';
  $field_group->data = array(
    'label' => 'Contact & Anonymity',
    'weight' => '41',
    'children' => array(
      0 => 'field_client_alias',
      1 => 'field_user_client',
      2 => 'field_user_matchmaker',
      3 => 'field_user_advisor',
      4 => 'field_preference_contact',
      5 => 'field_client_resources',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_interview|node|assessment|default';
  $field_group->group_name = 'group_interview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Interview',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_urgency',
      2 => 'field_location_description',
      3 => 'field_background',
      4 => 'field_ideas',
      5 => 'field_needs',
      6 => 'field_images',
      7 => 'field_preference_contact',
      8 => 'field_impact',
      9 => 'field_term_objectives',
      10 => 'group_time',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => NULL,
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_interview|node|assessment|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcome|node|assessment|default';
  $field_group->group_name = 'group_outcome';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Outcome',
    'weight' => '5',
    'children' => array(
      0 => 'field_outcome',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
      ),
    ),
  );
  $export['group_outcome|node|assessment|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcome|node|assessment|form';
  $field_group->group_name = 'group_outcome';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Outcome',
    'weight' => '10',
    'children' => array(
      0 => 'field_outcome',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_outcome|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcome|node|assessment|full';
  $field_group->group_name = 'group_outcome';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Outcome',
    'weight' => '44',
    'children' => array(
      0 => 'field_outcome',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_outcome|node|assessment|full'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overview|node|assessment|default';
  $field_group->group_name = 'group_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '1',
    'children' => array(
      0 => 'field_status',
      1 => 'field_description',
      2 => 'field_keywords',
      3 => 'field_client_alias',
      4 => 'field_user_client',
      5 => 'field_user_matchmaker',
      6 => 'field_user_advisor',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => NULL,
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_overview|node|assessment|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overview|node|assessment|form';
  $field_group->group_name = 'group_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_overview|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overview|node|assessment|full';
  $field_group->group_name = 'group_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '39',
    'children' => array(
      0 => 'field_description',
      1 => 'field_keywords',
      2 => 'field_location_description',
      3 => 'field_term_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Overview',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_overview|node|assessment|full'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|assessment|form';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'People & Participation',
    'weight' => '6',
    'children' => array(
      0 => 'field_status',
      1 => 'group_time',
      2 => 'group_representation',
      3 => 'group_contact',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'People & Participation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_people|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people|node|assessment|full';
  $field_group->group_name = 'group_people';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'People & Participation',
    'weight' => '41',
    'children' => array(
      0 => 'field_status',
      1 => 'field_client_alias',
      2 => 'field_user_client',
      3 => 'field_user_matchmaker',
      4 => 'field_user_advisor',
      5 => 'field_client_resources',
      6 => 'group_representation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'People & Participation',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_people|node|assessment|full'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_details|node|assessment|form';
  $field_group->group_name = 'group_project_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '1',
    'children' => array(
      0 => 'group_project',
      1 => 'group_analysis',
      2 => 'group_recommendation',
      3 => 'group_outcome',
      4 => 'group_people',
      5 => 'group_overview',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => NULL,
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_project_details|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_details|node|assessment|full';
  $field_group->group_name = 'group_project_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '40',
    'children' => array(
      0 => 'body',
      1 => 'field_background',
      2 => 'field_ideas',
      3 => 'field_needs',
      4 => 'field_images',
      5 => 'field_challenges',
      6 => 'group_time',
      7 => 'group_benefit',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_project_details|node|assessment|full'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|assessment|default';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '0',
    'children' => array(
      0 => 'group_interview',
      1 => 'group_analysis',
      2 => 'group_recommendation',
      3 => 'group_outcome',
      4 => 'group_overview',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_project|node|assessment|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|assessment|form';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Interview',
    'weight' => '5',
    'children' => array(
      0 => 'body',
      1 => 'field_description',
      2 => 'field_urgency',
      3 => 'field_keywords',
      4 => 'field_location_description',
      5 => 'field_background',
      6 => 'field_ideas',
      7 => 'field_needs',
      8 => 'field_images',
      9 => 'field_impact',
      10 => 'field_goal',
      11 => 'field_term_objectives',
      12 => 'field_term_category',
      13 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|node|assessment|full';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '0',
    'children' => array(
      0 => 'group_overview',
      1 => 'group_project_details',
      2 => 'group_analysis',
      3 => 'group_people',
      4 => 'group_recommendation',
      5 => 'group_outcome',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_project|node|assessment|full'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recommendation|node|assessment|default';
  $field_group->group_name = 'group_recommendation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Recommendation',
    'weight' => '4',
    'children' => array(
      0 => 'field_next_steps',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_recommendation|node|assessment|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recommendation|node|assessment|form';
  $field_group->group_name = 'group_recommendation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Recommendation',
    'weight' => '9',
    'children' => array(
      0 => 'field_recommendation',
      1 => 'field_next_steps',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_recommendation|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recommendation|node|assessment|full';
  $field_group->group_name = 'group_recommendation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_project';
  $field_group->data = array(
    'label' => 'Recommendation',
    'weight' => '43',
    'children' => array(
      0 => 'field_recommendation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_recommendation|node|assessment|full'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_representation|node|assessment|form';
  $field_group->group_name = 'group_representation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_people';
  $field_group->data = array(
    'label' => 'Representation',
    'weight' => '40',
    'children' => array(
      0 => 'field_term_people_active',
      1 => 'field_people_effected',
      2 => 'field_people_effected_known',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_representation|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_representation|node|assessment|full';
  $field_group->group_name = 'group_representation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_people';
  $field_group->data = array(
    'label' => 'Representation',
    'weight' => '19',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_representation|node|assessment|full'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_time|node|assessment|default';
  $field_group->group_name = 'group_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_interview';
  $field_group->data = array(
    'label' => 'Time Involvment',
    'weight' => '11',
    'children' => array(
      0 => 'field_time_estimate',
      1 => 'field_time_effort',
      2 => 'field_time_history_personal',
      3 => 'field_time_history_community',
      4 => 'field_representation',
      5 => 'field_representation_known',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_time|node|assessment|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_time|node|assessment|form';
  $field_group->group_name = 'group_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_people';
  $field_group->data = array(
    'label' => 'Time Involvment',
    'weight' => '39',
    'children' => array(
      0 => 'field_time_estimate',
      1 => 'field_time_effort',
      2 => 'field_time_history_personal',
      3 => 'field_time_history_community',
      4 => 'field_date_deadline',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_time|node|assessment|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_time|node|assessment|full';
  $field_group->group_name = 'group_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'assessment';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Time Involvment',
    'weight' => '37',
    'children' => array(
      0 => 'field_time_estimate',
      1 => 'field_time_effort',
      2 => 'field_time_history_personal',
      3 => 'field_time_history_community',
      4 => 'field_date_deadline',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_time|node|assessment|full'] = $field_group;

  return $export;
}
