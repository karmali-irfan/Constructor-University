<?php

  #getting errors on the page
  #ini_set('display_errors',1);
  ini_set('log_errors', 1);
  ini_set('error_log', dirname(__FILE__). '/log.txt');
  error_reporting(E_ALL);


include ('../connect.php');


$trainid = filter_input(INPUT_POST, "trainID", FILTER_VALIDATE_INT);
$tot_stops = filter_input(INPUT_POST, "tot", FILTER_VALIDATE_INT);
$route_id = filter_input(INPUT_POST, "route_id", FILTER_VALIDATE_INT);

if(empty($trainid) || empty($tot_stops)){
  echo "<p> Please Enter Valid Data <p>";
  include './route.php';
  exit();
}
else{
  $check1 = $connect-> query("SELECT train_id FROM train WHERE train_id = $trainid;");
  $check2 = $connect-> query("SELECT route_id FROM route WHERE route_id = $route_id;");
  if($check1->num_rows < 1){
    echo"<p>checking if success</p>";
    echo"<p>Train ID non existant please check registered train then enter their ID for registering route</p>";
    include'route_form.php';
    exit();
  }
  if($check2->num_rows > 0){
    echo"<p>This route_id already exists<p>";
    include ("longdist.php");
    exit();
  }
}


  
header("Location: ./success.php") ; 
include '../footer.php';
  $sql = "INSERT INTO route (train_id, Total_stops) VALUES (?,?)";

  $stmt = mysqli_stmt_init($connect);

  if(!mysqli_stmt_prepare($stmt, $sql)){
      die(mysqli_error($connect));
  }

  mysqli_stmt_bind_param($stmt, "iii", $trainid, $route_id ,$tot_stops);

  mysqli_stmt_execute($stmt);

?>