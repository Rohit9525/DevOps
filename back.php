

<?php

if($_SERVER("Request_method")=="POST"){
    $name=htmlspecialchars($_POST["name"]);
    if(!empty($name)){
        echo $name;
    }
    else{
        echo "empty";
    }
}



?>

