<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function project_intake_taxonomy_default_vocabularies() {
  return array(
    'problem_categories' => array(
      'name' => 'Problem Categories',
      'machine_name' => 'problem_categories',
      'description' => 'If you could only pick one approach to solving your problem, which one would you choose?',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          '0' => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            '0' => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            '0' => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'project_groups' => array(
      'name' => 'Project Groups',
      'machine_name' => 'project_groups',
      'description' => 'Big projects that are comprised of little projects.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          '0' => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            '0' => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            '0' => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
