<?php

// array declaration

$a=array(1,2,3,4,5,6,7,8,9,10);

for($i=0;$i<count($a);$i++){

    echo $a[$i]."<br>";
}

$b=[1,2,3,4];  // another way to declare

foreach($b as $i){
    echo $i." <br>";
}

print_r(array_intersect($a,$b));

$a1=array(
    "a"=>"apple", "f"=>"ball", "c"=>"cat"
);

$a2=array(
    "e"=>"axe", "b"=>"ball", "g"=>"cat","h"=>3
);

print_r(array_intersect($a1,$a2));
echo "<br>";
var_dump($a2);
echo "<br>";
print_r($a2);
?>