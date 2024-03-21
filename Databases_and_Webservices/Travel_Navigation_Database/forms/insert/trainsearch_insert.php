<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

    include '../header.php';
    include ('../../connectadmin.php');
     
    $table = $_POST['train']; 
    $query = "SELECT * FROM $table"; 
    $result = mysqli_query($connect, $query); 
    echo "<style> 
            body {
            background-image: url('../img/Background_1.jpg');
            background-repeat: no-repeat ; 
            background-size: cover;
            }
        </style>";
    echo"<div id='registration-form'>";
    echo"<div class='fieldset'>";
    echo"<legend>Train information!</legend>";
    echo"<form>";
    echo "<table border='2' cellspacing='2' cellpadding='2'>"; 
        echo "<tr>
                <td> <font face='Arial'>Train Name</font> </td> 
                <td> <font face='Arial'>Route ID</font> </td> 
                <td> <font face='Arial'>Price </font> </td> 
            <tr>";
            while ($row = $result->fetch_assoc()) {
                $field1name = $row["train_name"];
                $field2name = $row["route_id"];
                $field3name = $row["price"];
                echo "  <tr> 
                            <td> <a href='./resultout.php?train=$field1name' method='get'>" .$field1name. "</a></td> 
                            <td>" .$field2name."</td> 
                            <td>".$field3name. "</td> 
                        </tr>";
            }
    echo "</table>"; 
    echo"</form>";
    echo"</div>";
    echo"</div>";

    include '../../footer.php'; 
?>