<?php
  
#getting errors on the page
#ini_set('display_errors',1);
ini_set('log_errors', 1);
ini_set('error_log', dirname(__FILE__). '/log.txt');
error_reporting(E_ALL);

include ('../connect.php');
$name = $_POST["p_name"];
$dep = $_POST["dep"];
$arr = $_POST["arr"];

if(empty($name) || $dep == $arr){
  echo"Please Enter valid data";
  echo", PLZ NOTE Departure must be different from Arrival";
  include ("passenger-register.php");
  include ('./passenger_register.php');
  exit();
}

else{
  include '../header.php'; 
  echo "<p>Hello it was successful</p>";
  $sql = "INSERT INTO passenger (p_name, departure, destination) VALUES (?,?,?);";

  $stmt = mysqli_stmt_init($connect);

  if(!mysqli_stmt_prepare($stmt, $sql)){
    die(mysqli_error($connect));
  }

  mysqli_stmt_bind_param($stmt, "sss", $name, $dep, $arr);

  mysqli_stmt_execute($stmt);
  
}




?>