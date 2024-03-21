<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

    include '../connect.php'; 
    include './routepath.php';
    $error = false; 
    if(isset($_POST['insert'])){
        
        if(!$_POST['routeID']){
            echo "please Enter Route ID";	
            $error = true; 
        }
        if($_POST['routeID']){
            $s_name = $_POST['s_name'];
            $route_id = $_POST['routeID'];
            $query = "SELECT route_id FROM route WHERE route_id = '$route_id' "; 
            $result = mysqli_query($connect, $query); 
            $row = mysqli_num_rows($result); 
            if($row == 0) {
                echo "<br> Invalid Entry! Route ID doesn't exist.";
                $error = true; 
            }
        }
        if(!$_POST['s_name']){
            echo " please Enter Station Name";	
            $error = true; 
        }
        if($_POST['s_name']){
            $s_name = $_POST['s_name'];
            $route_id = $_POST['routeID'];
            $query = "SELECT s_name FROM route_path WHERE s_name = '$s_name' AND route_id = '$route_id' "; 
            $result = mysqli_query($connect, $query); 
            $row = mysqli_num_rows($result); 
            if($row > 0) {
                echo "<br> Invalid Entry! Station is already on Route Path.";
                $error = true; 
            }
            $s_name1 = $_POST['s_name'];
            $query1 = "SELECT * FROM station WHERE s_name = '$s_name1' "; 
            $result1 = mysqli_query($connect, $query1); 
            $row1 = mysqli_num_rows($result1); 
            if($row1 == 0){ 
                echo "<br> Invalid Entry! Station doesn't exist"; 
                $error = true ; 
            }

        }
        if(!$_POST['sequences']){
           echo "<br/>please Enter Sequence";	
           $error = true; 
        }
        if($_POST['sequences']){
            $route_id = $_POST['routeID'];
            $sequences = $_POST['sequences']; 
            $query = "SELECT sequences FROM route_path WHERE route_id = '$route_id'AND sequences = '$sequences' "; 
            $result = mysqli_query($connect, $query); 
            $row = mysqli_num_rows($result); 	
            if ($row > 0){ 
                echo " <br> sequence already exists! Please choose another one"; 
                $error = true;
            }
        }
        if($error == true){
            echo "<br>There were errors in your input!"; 
        }
        else {
            $route_id = $_POST['routeID'];
            $s_name = $_POST['s_name'];            
            $sequences = $_POST['sequences']; 
            $query = "INSERT INTO route_path VALUES('$route_id', '$s_name', '$sequences')";
           
            if(mysqli_query($connect, $query)){
                header("Location: ./success.php");
            }
            else {
                header("Location: ./faliure.php");
            }
        }
        
    }
?>