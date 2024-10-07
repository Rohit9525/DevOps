<?php
echo "Q1.<br>";
$a=100;
$b=200;

echo "Before swapping value of \$a is $a and \$b is $b<br>";

$a=$a+$b;
$b=$a-$b;
$a=$a-$b;

echo "Swapped Values without using third variable.<br>\$a=$a and \$b=$b<br>--------------------------------<br>";



echo "Q2.<br>";
echo "A|B| A OR B<br>--------------------------<br>";

echo "0|0|".(0||0)."<br>";
echo "0|1|".(0||1)."<br>";
echo "1|0|".(1||0)."<br>";
echo "1|1|".(1||1)."<br>";




?>