<?php

/*
 * 
 * 
 * Following instructions on how to render a table I came across this.
 * 
 * Did not succeed in showing a table in View. Unsure as to why.  
 * 
 */

function hook_views_data() {
    
    $data['user_information']['table']['group']=t('User Information');
    
    $data['user_information']['table']['base'] = array(
        'field' => 'id',
        'title' => t('User Information'),
        'help' => t('User Information contains information about the users'),
        'weight' => -10,        
    );
    
    $data['user_information']['table']['join'] = array(
        'node' => array(
            'left_field' => 'nid',
            'field' => 'nid',
        ),
    );
    
    $data['user_information']['id'] = array(
        'title' => t('User Content'),
        'help' => t('This is the primary key for each User'),
        'relationship' => array(
            'base' => 'node',
            'base field' => 'id',
            'handler' => 'views_handler_relationship',
            'label' => t('Default label for the relationship'),
            'title' => t('Title shown when adding the relaionship'),
            'help' => t('More information on this relationship'),
        ),
    );
    
    $data['user_information']['first_name'] = array(
        'title' => t('Users First Name'),
        'help' => t('The Users First Name saved to the Database'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click_sortable' => TRUE,            
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
        'filter' => array(
            'handler' => 'views_handler_filter_string',
        ),
        'argument' => array(
            'handler' => 'view_handler_argument_string',
        ),
    );
    
    return $data;    
}

