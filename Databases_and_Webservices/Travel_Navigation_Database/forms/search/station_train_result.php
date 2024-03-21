<?php

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

    include '../header.php';
    include '../../connectadmin.php';

    $dep = $_POST["dep"];
    $arr = $_POST["arr"];

    $sql = "SELECT DISTINCT train_name, p_name FROM train, passenger, route_path, route
    WHERE '$dep' = route_path.s_name AND route_path.route_id = route.route_id AND route.train_id = train.train_id
    UNION
    SELECT DISTINCT train_name, p_name FROM train, passenger, route_path, route
    WHERE '$arr' = route_path.s_name AND route_path.route_id = route.route_id AND route.train_id = train.train_id;";

    $result = $connect-> query($sql);

    echo"<div id='registration-form'>";
    echo"<div class='fieldset'>";
    echo"<legend>Train information!</legend>";
    echo"<form>";

    if($result->num_rows > 0){
        //output data of each row
        while($row = $result->fetch_assoc()) {
            echo"<div class='row'>";
            echo "<p> Train ". $row["train_name"];
            echo "</div>";
        }
    }else{
        echo "0 results";
    }

    echo"</form>";
    echo"</div>";
    echo"</div>";
    include '../../footer.php';

    $connect->close();

?>