<?php
#getting errors on the page
#ini_set('display_errors',1);
ini_set('log_errors', 1);
ini_set('error_log', dirname(__FILE__). '/log.txt');
error_reporting(E_ALL);
include ('../../connectadmin.php');

$long_id = filter_input(INPUT_POST, "long_id", FILTER_VALIDATE_INT);
$train_name = $_POST["train_name"];
$route_id = filter_input(INPUT_POST, "route_id", FILTER_VALIDATE_INT);
$price = filter_input(INPUT_POST, "price", FILTER_VALIDATE_INT);

if(empty($long_id) || empty($route_id) || empty($train_name) || empty($price)){
  echo"<p>Please Enter valid data<p>";
  include ("longdist.php");
  exit();
}

else{
  $check1= $connect-> query("SELECT train_name FROM train WHERE train_name = '$train_name'");
  $check2= $connect-> query("SELECT route_id FROM route WHERE route_id = $route_id");
  $check3= $connect-> query("SELECT long_id FROM long_Dist WHERE long_id = $long_id");

  if($check3->num_rows > 0){
    echo"<p>This long_id is already registered in trains</p>";
    include ("longdist.php");
    exit();
  }

  if($check1->num_rows < 1){
    echo"This $train_name does not exists in the Train name database";
    include ("longdist.php");
    exit();
  }

  if($check2->num_rows < 1){
    echo"<p>This route_id is no where to be found<p>";
    include ("longdist.php");
    exit();
  }

  include('./header.php');
  header("Location: ./success.php") ; 
  include '../footer.php';
  $sql = "INSERT INTO long_Dist VALUES (?, ?, ?, ?)";

  $stmt = mysqli_stmt_init($connect);

  if(!mysqli_stmt_prepare($stmt, $sql)){
    die(mysqli_error($connect));
  }

  mysqli_stmt_bind_param($stmt, "isii", $long_id, $train_name, $route_id, $price);

  mysqli_stmt_execute($stmt);
}



?>