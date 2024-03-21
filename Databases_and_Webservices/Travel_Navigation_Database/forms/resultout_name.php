<?php 
    include 'header.php';
    include ('../connect.php');
     
    $p_name = $_GET['p_name'];
    if(isset($p_name)){
        echo"<div id='registration-form'>";
        echo"<div class='fieldset'>";
        echo"<legend>Train information!</legend>";
        echo"<form>";
        
        $sql = "SELECT * FROM passenger 
            WHERE  p_name = '$p_name' ;";
        $result = $connect-> query($sql);
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
                            <td> <a href='./resultout_name.php?p_name = $p_name' method='get'>" .$row["p_name"]. "</a></td> 
                            <td>" .$row["departure"]."</td> 
                            <td>".$row["destination"]. "</td> 
                        </tr>";
                
            }
        }else{
            echo"<div class='row'>";
            echo "Unfortunately $p_name is not in our data base";
            echo "</div>";
        }
    }

    $result = $connect-> query($sql);

    

    echo "</table>"; 
    echo " <br> <a href='./trainsearch.php'> Go Back </a> <br>";
    echo"</form>";
    echo"</div>";
    echo"</div>";
    include '../footer.php';
    $connect->close();

    
?>