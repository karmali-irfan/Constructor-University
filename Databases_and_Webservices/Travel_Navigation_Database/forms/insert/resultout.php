<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

    include '../header.php';
    include ('../connect.php');
     
    $train_name = $_GET['train']; 
    $query = "SELECT * FROM train WHERE train_name='$train_name'"; 
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
                <td> <font face='Arial'>Train ID</font> </td> 
                <td> <font face='Arial'>Origin </font> </td> 
                <td> <font face='Arial'>Destination </font> </td> 
            <tr>";
            while ($row = $result->fetch_assoc()) {
                $field1name = $row["train_name"];
                $field2name = $row["train_id"];
                $field3name = $row["origin"];
                $field4name = $row["destination"];
                echo "  <tr> 
                            <td> " .$field1name. "</td> 
                            <td>" .$field2name."</td> 
                            <td>".$field3name. "</td> 
                            <td>".$field4name. "</td> 
                        </tr>";
            }
    echo "</table>"; 
    echo " <br> <a href='../forms.php'> Go Back </a> <br>";
    echo"</form>";
    echo"</div>";
    echo"</div>";

    include '../footer.php'; 
?>