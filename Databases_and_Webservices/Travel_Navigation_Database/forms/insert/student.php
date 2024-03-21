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

    <title> Quick Rail | Student Form </title> 

    <div id="registration-form">
        <div class='fieldset'>
          <legend>Student Form!</legend>
          <form action="student_insert.php" method="POST" >
            <div class='row'>
              <label for='Passenger'>Passenger ID </label> <br>
              <input type="number" placeholder="Passenger ID" id='passengerID' data-required="true" name="p_id">
            </div>
            <div class='row'>
              <label for='Student ID'>Student ID </label> <br>
              <input type="number" placeholder="Student ID" id='studentID' data-required="true" name="s_id">
            </div>
            
            <input type="submit" value="Input Data" name="create">
          </form>
        </div>
    </div>
    <br><br><br><br><br><br><br><br><br>
    <div>
  </div>


<?php 
    include('../../footer.php'); 
?>