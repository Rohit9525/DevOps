<?php
echo "for loop"."<br>";
for($i=1;$i<=5;$i++){

    if($i==3) continue;
    echo $i."<br>";
}
$i=1;
echo "while loop"."<br>";

while($i<=5){
    if($i==3) break;
    echo $i."<br>";
    $i++;
}
$i=1;
echo "do while loop"."<br>";

do{
    echo $i.'<br>';
    $i++;
}while($i<=5);

$k=1;
if($k==1){
    echo "Monday";
}
elseif($k==2){
 echo "Tuesday";
}
else{
    echo "invalid";
}

switch($k){
    case 1: echo "Monday";
    break;
    case 2: echo "Tuesday";
    break;
    default: echo "invalid";
}

?>