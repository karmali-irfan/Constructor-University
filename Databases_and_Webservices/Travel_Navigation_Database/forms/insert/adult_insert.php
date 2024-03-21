<?php

include ('../../connectadmin.php');

$p_id = filter_input(INPUT_POST, "p_id", FILTER_VALIDATE_INT);
$adult_id = filter_input(INPUT_POST, "adult_id", FILTER_VALIDATE_INT);

if(empty($p_id) || empty($adult_id)){
  echo"Please Enter valid data";
  include ("./adult.php");
  exit();
}

else{

    $check1 = $connect-> query("SELECT p_id FROM passenger WHERE p_id = $p_id;");
    if($check1->num_rows < 1){
        echo"<p>checking if success</p>";
        echo"<p>Passenger does not exist</p>";
        include ("./adult.php");
        exit();
    }

    $check2 = $connect-> query("SELECT adult_id FROM Adult WHERE adult_id = $adult_id;");
    if($check2->num_rows > 0){
        echo"<p>checking if success</p>";
        echo"<p>This adult is existant</p>";
        include ("./adult.php");
        exit();
    }

    $check3 = $connect-> query("SELECT p_id FROM Adult WHERE p_id = $p_id;");
    if($check3->num_rows > 0){
        echo"<p>checking if success</p>";
        echo"<p>This adult is existant</p>";
        include ("./adult.php");
        exit();
    }

  include('./header.php');
  $sql = "INSERT INTO Adult (p_id, adult_id) VALUES (?,?);";

  $stmt = mysqli_stmt_init($connect);

  if(!mysqli_stmt_prepare($stmt, $sql)){
    die(mysqli_error($connect));
  }

  mysqli_stmt_bind_param($stmt, "ii", $p_id, $adult_id);

  mysqli_stmt_execute($stmt);

    header("Location: ./success.php") ; 
    include '../footer.php';
 
}



?>