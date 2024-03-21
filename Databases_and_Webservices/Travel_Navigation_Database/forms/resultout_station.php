<?php 
    include '../header.php';
    include ('../connect.php');

    $station = $_GET['stat'];


    $sql = "SELECT DISTINCT train_name FROM train, passenger, route_path, route
    WHERE '$station' = route_path.s_name AND route_path.route_id = route.route_id AND route.train_id = train.train_id ";
    $result = $connect-> query($sql);

    if($result->num_rows > 0){
        
    echo"<div id='registration-form'>";
    echo"<div class='fieldset'>";
    echo"<legend>Train information!</legend>";
    echo"<form>";

        //output data of each row
        echo "<table border='2' cellspacing='2' cellpadding='2'>"; 
        echo "<tr>
            <td> <font face='Arial'>Train Name</font> </td> 
            <tr>";
        while($row = $result->fetch_assoc()) {
            $tn = $row["train_name"];
            echo "  <tr> 
                        <td> <a href='./resultout.php?train=$tn' method='get'>" .$row["train_name"]."</td>
                    </tr>";
            
        }
    }else{
        echo"<div class='row'>";
        echo "Unfortunately $p_name is not in our data base";
        echo "</div>";
    }


    $result = $connect-> query($sql);



    echo "</table>"; 
    echo"</form>";
    echo"</div>";
    echo"</div>";
    include '../footer.php';
    $connect->close();


?>