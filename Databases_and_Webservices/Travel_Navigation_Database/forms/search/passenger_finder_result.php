<?php

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

    include("../header.php");
    include ('../../connectadmin.php');

    $p_name = $_POST['p_name']; 

    if(isset($_POST['p_name'])){

        $sql = "SELECT * FROM passenger 
        WHERE  p_name = '$p_name' ;";

        $result = $connect-> query($sql);

        echo"<div id='registration-form'>";
        echo"<div class='fieldset'>";
        echo"<legend>Train information!</legend>";
        echo"<form>";

        if($result->num_rows > 0){
            //output data of each row
            echo "<table border='2' cellspacing='2' cellpadding='2'>"; 
            echo "<tr>
                <td> <font face='Arial'>Passenger ID</font> </td> 
                <td> <font face='Arial'>Passenger Name</font> </td> 
                <td> <font face='Arial'>Departure </font> </td> 
                <td> <font face='Arial'>Arrival </font> </td> 
                <tr>";
            while($row = $result->fetch_assoc()) {
                $dep = $row["departure"];
                $arr = $row["destination"];
                echo "  <tr> 
                            <td>" .$row["p_id"]."</td>
                            <td> <a href='./resultout_name.php?p_name=$p_name'method='get'>" .$row["p_name"]. "</a></td> 
                            <td> <a href='./resultout_station.php?stat=$dep'method='get'>" .$row["departure"]."</td> 
                            <td> <a href='./resultout_station.php?stat=$arr'method='get'>".$row["destination"]. "</td> 
                        </tr>";
                
            }
        }else{
            echo"<div class='row'>";
            echo "Unfortunately $p_name is not in our data base";
            echo "</div>";
        }

        echo "</table>"; 
        echo " <br> <a href='./passenger_finder.php'> Go Back </a> <br>";
        echo"</form>";
        echo"</div>";
        echo"</div>";
        include '../../footer.php';
        $connect->close();

    }
?>