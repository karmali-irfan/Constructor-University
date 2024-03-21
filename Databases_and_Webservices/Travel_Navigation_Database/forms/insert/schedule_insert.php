<?php

  #getting errors on the page
  #ini_set('display_errors',1);
  ini_set('log_errors', 1);
  ini_set('error_log', dirname(__FILE__). '/log.txt');
  error_reporting(E_ALL);

  include ('../../connectadmin.php');



$train_id = filter_input(INPUT_POST, "trainID", FILTER_VALIDATE_INT);
$dep = $_POST["dep"];
$arr = $_POST["arr"];

if(empty($train_id) || $dep == $arr){
  echo"Please Enter valid data";
  include ("schedule_form.php");
  exit();
}

else{

  $check1 = $connect-> query("SELECT train_id FROM train WHERE train_id = $train_id;");
  if($check1->num_rows < 1){
    echo"<p>checking if success</p>";
    echo"<p>Train ID non existant please check registered train then enter their ID for registering schedule</p>";
    include('schedule_form.php');
    exit();
  }

  $sql = "INSERT INTO schedule (train_id, departure_time, arrival_time) VALUES (?,?,?);";

  if ($_SESSION['access'] == 1){
    $stmt = mysqli_stmt_init($connect);

    if(!mysqli_stmt_prepare($stmt, $sql)){
      die(mysqli_error($connect));
    }

    mysqli_stmt_bind_param($stmt, "iss", $train_id, $dep, $arr);

    mysqli_stmt_execute($stmt);
    header("Location: ../success.php") ; 

  }
  else{
    include 'header.php';
    $a = $_SESSION['user'];
    $b = $_SESSION['pass'];
    echo "$a -------- $b";
    echo"<p>Please Log in as an admin to INSERT</p>";
    
  }
  
  include '../footer.php';
  
}



?>