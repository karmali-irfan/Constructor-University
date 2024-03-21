<?php 
    include('../header.php'); 
    if($_SESSION['access'] == 0){
      header("Location: ../admin.php");
      exit();
    }
    if($_SESSION['access'] == 1){
      include ('../connectadmin.php');
    } 
?>

<!DOCTYPE html> 
<html> 
    <style> 
      body {
        background-image: url('../img/Background_1.jpg');
        background-repeat: no-repeat ; 
        background-size: cover;
      }
    </style>
    <title> Quick Rail | Success  </title> 
    <p> Your data was inserted successfully </p> 
    <a href="../forms.php" style="color:blue"> Go Back </a>


<?php 
    include('../footer.php'); 
?>