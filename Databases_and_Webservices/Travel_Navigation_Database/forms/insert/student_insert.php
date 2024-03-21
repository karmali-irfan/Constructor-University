<?php 

#getting errors on the page
#ini_set('display_errors',1);
ini_set('log_errors', 1);
ini_set('error_log', dirname(__FILE__). '/log.txt');
error_reporting(E_ALL);

    include '../../adminconnect.php';
    include './student.php';

    if(isset($_POST['create'])){
      $count = 0;
      if(!$_POST['p_id']){
        $error.= "<br/>please Enter Passenger ID";	
      }
      if(!$_POST['s_id']){
        $error.= "<br/>please Enter Student ID";	
      } 
      if ($_POST['p_id']){
        $p_id = $_POST['p_id']; 
        $query = "SELECT * FROM passenger WHERE p_id = '$p_id' ";
        $result = mysqli_query($connect, $query); 
        $count = mysqli_num_rows($result);
        if($count == 0){
          $error.= "<br/> Passenger ID doesn't exist.";	
        }
      }   
      if ($_POST['s_id']){
        $s_id = $_POST['s_id']; 
        $query = "SELECT * FROM student WHERE student_id = '$s_id' ";
        $result = mysqli_query($connect, $query); 
        $count = mysqli_num_rows($result);
        if($count > 0){
          $error.= "<br/> Student ID doesn't exist. ";	
        }
      }    

      if (isset($error)) {
        echo "There Were error(s) In Your Signup Details :" .$error;	
      } 
      else{
        $p_id = $_POST['p_id']; 
        $s_id = $_POST['s_id']; 
        $query = "INSERT INTO student VALUES('$p_id', '$s_id')";
        if (mysqli_query($connect, $query)) {
          header("Location: ./success.php") ; 
        }
        else {
          header("Location: ./failure.php") ; 
        }
      }
    }   
?>