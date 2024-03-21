<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

    include "../header.php"; 
    if($_SESSION['access'] == 0){
      header("Location: ../../admin.php");
      exit();
    }
    if($_SESSION['access'] == 1){
      include ('../../connectadmin.php');
    } 


?>


<!DOCTYPE html> 
<html> 
    <style> 
      body {
        background-image: url('../../img/Background_1.jpg');
        background-repeat: no-repeat ; 
        background-size: cover;
      }
    </style>

    <title> Quick Rail | Train Form </title> 

    <div id="registration-form">
        <div class='fieldset'>
          <legend>Train Form!</legend>
          <form action="train_insert.php" method="POST" >
            <div class='row'>
              <label for='train_id'>Train ID </label> <br>
              <input type="number" placeholder="Train ID" id='trainid' data-required="true" name="id">
            </div>
            <div class='row'>
              <label for='train_name'>Train Name </label>
              <input type="text" placeholder="Train Name" id='trainname' data-required="true" name="name">
            </div>
            <div class='row'>
              <label for="origin">Origin Station</label>
              <input type="text" placeholder="Origin Station" data-required="true" name="origin">
            </div>
            <div class='row'>
              <label for="destination">Destination Station</label>
              <input type="text" placeholder="Destination Station" data-required="true" name="dest">
            </div>
            <input type="submit" value="Input Data" name="create">
          </form>
        </div>
    </div>
    <div>
  </div>


<?php 
    include('../../footer.php'); 
?>