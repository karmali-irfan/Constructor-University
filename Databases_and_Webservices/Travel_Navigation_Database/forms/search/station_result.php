<?php

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

include('../header.php'); //including header file
include('../../connect.php'); //including connect file

$s_name = $_POST["s_name"];

$sql = "SELECT train_name
FROM train, route_path, route
WHERE train.train_id = route.train_id AND route_path.route_id = route.route_id AND s_name = '$s_name';";

$result = $connect-> query($sql);

echo"<div id='registration-form'>";
echo"<div class='fieldset'>";
echo"<legend>Train information!</legend>";
echo"<form>";

if($result->num_rows > 0){
    while($row = $result->fetch_assoc()) {
        echo"<div class='row'>";
        echo "<p> Train ". $row["train_name"];
        echo "</div>";
    }  
}else{
    echo "0 results";
}

echo "<a href='./station.php'> Go Back </a> "; 

echo"</form>";
echo"</div>";
echo"</div>";

$connect->close();

include '../../footer.php' //including footer 
?>