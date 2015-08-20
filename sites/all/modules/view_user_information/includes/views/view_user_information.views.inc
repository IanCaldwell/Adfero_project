<?php

/*
 * Implements hooks_views_data()
 */

function view_user_information_views_data() {
    $data = array();
    
    $data['user_information']['table']['group'] = t('User Information');
    
    $data['user_information']['table']['base'] = array(
        'title' => t('User Information'),
        'help' => t('Contains Records we want to expose to Views'),    
    );
    
    
    $data['user_information']['id'] = array(
        'title' => t('ID'),
        'help' => t('The User ID'),
        'field' => array(
            'handler' => 'views_handler_field_numeric',
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',            
        ),
        'filter' => array(
            'handler' => 'views_handler_filter_numeric',
        ),        
    );   
    
    $data['user_information']['first_name'] = array(
    'title' => t('User First Name'),
    'help' => t('The record name.'),
    'field' => array(
        'handler' => 'views_handler_field',
    ),
    'sort' => array(
        'handler' => 'views_handler_sort',
    ),
    'filter' => array(
        'handler' => 'views_handler_filter_string',
    ),
); 
    
    return $data;
}


