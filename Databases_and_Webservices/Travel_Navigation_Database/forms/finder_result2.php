<?php
    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);
    
    include("../header.php");
    include('../connect.php') ; 

    $p_name = $_GET['p_name']; 

    if(isset($_GET['p_name'])){

        $sql = "SELECT * FROM passenger 
        WHERE  p_name = '$p_name' ;";

        $result = $connect-> query($sql);

        echo"<div id='registration-form'>";
        echo"<div class='fieldset'>";
        echo"<legend>Train information!</legend>";
        echo"<form>";

        if($result->num_rows > 0){
            //output data of each row
            while($row = $result->fetch_assoc()) {
                $p_id = $row["p_id"];
                echo"<div class='row'>";
                echo "<a href = 'passenger_finder.php?p_id=$p_id & p_name = $p_name'<p> Passenger ID: ". $row["p_id"];
                echo "</div>";
                echo"<div class='row'>";
                echo "a href = 'finder_result.php?p_id=$p_id & p_name = $p_name'<p> Passenger name: ". $row["p_name"];
                echo "</div>";
                echo"<div class='row'>";
                echo "</div>";
                echo"<div class='row'>";
                echo "<p> Passenger Departure: ". $row["departure"];
                echo "</div>";
                echo"<div class='row'>";
                echo "<p> Passenger destination: ". $row["destination"];
                echo "</div>";
                echo"-----------------------------------------------";
            }
        }else{
            echo"<div class='row'>";
            echo "Unfortunately $p_name is not in our data base";
            echo "</div>";
        }

        echo"</form>";
        echo"</div>";
        echo"</div>";
        include '../footer.php';
        $connect->close();

    }
?>