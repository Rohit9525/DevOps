<?php

function value($a){
    $a=5;
    echo $a.1;
    
}

function reference(&$a){
    $a=5;
    echo $a;
    
}

value($a);
echo($a);
reference($a);
echo($a);

$c= &$a;
$c++;
echo $c;
echo $a;

?>

