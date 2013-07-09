<?php

/**
 *
 *
 * @file DICTIONARY.inc
 */
  

function generate_dictionary() {


  // how many sufixeds should i create per each root. 
  // e.g: root_elephant1, root_elephant2 <-- 2
  $LIMIT_PER_ROOT = 30;


  // add sample words here
  $ROOT_LIST = array(
        'test',
        'word',
        'car',
        'dog',
        'cat',
        'sun',
        'beer',
        'spider',
        'snake',
        'table',
        'window',
        'man',
        'pet',
        'dinosaur',
        'bee',
        'fork',
        'bike',
        'motorbike',
        'space',
        'web',
        'internet',
        'lion',
        'deer',
        'bear',
        'frog',
        'wolf',
        'pig',
        'chicken',
        'turkey',
        'bull',
        'plain',
        'mouse',
        'beer',
        'house',
   );
  
  // 34 elems x 30 iteration --> 1020 combinations
  
  $DICT = array ();
  foreach ($ROOT_LIST as $root) { 
    for ($i=1; $i<=$LIMIT_PER_ROOT; $i++)  {      
      $DICT[] = $root . $i;
      // watchdog("wd", "<pre>".print_r($DICT, TRUE)."</pre>");
    } 
  }
  return $DICT;
}

