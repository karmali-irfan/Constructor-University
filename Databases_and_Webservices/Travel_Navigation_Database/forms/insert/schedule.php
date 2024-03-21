<?php 

#getting errors on the page
#ini_set('display_errors',1);
ini_set('log_errors', 1);
ini_set('error_log', dirname(__FILE__). '/log.txt');
error_reporting(E_ALL);

  include '../header.php';
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
<head>
    <div id="registration-form">
        <div class='fieldset'>
          <legend>Schedule</legend>
          <form action="schedule_insert.php" method="post" >
            
            <div class='row'>
              <label for='firstname'>Existing Train ID</label>
              <input type="text" placeholder="Train ID" name= "trainID" >
            </div>

            <div class='row'>
              <label for="studentid">Departure time:</label>
              <input type="time" id="start" name="dep" required>
            </div>

            <div class='row'>
                <label for="studentid">Arrival time:</label>
                <input type="time" id="end" name="arr" required>
            </div>
            
            <input type="submit" value="Register">
          </form>
        </div>
      </div>

      <?php include '../../footer.php' ?>
</body>

</html>