<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

  include '../header.php'; 
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
        background-image: url('../../img/Background_1.jpg');
        background-repeat: no-repeat ; 
        background-size: cover;
      }
    </style>
<body>

  <div id="registration-form">
      <div class='fieldset'>
        <legend>Route Path</legend>
        <form action="routepath_insert.php" method="post" >
          <div class='row'>
              <label for='routeID'>Route ID</label> <br> 
              <input type="number" placeholder="Route ID" name= "routeID" >
            </div>

          <div class='row'>
              <label for='s_name'>Station Name</label>
              <input type="text" placeholder="Station Name" name= "s_name" >
            </div>

            <div class='row'>
              <label for='sequences'>Total Stops</label> <br> 
              <input type="number" placeholder="Sequence Number" name= "sequences" >
            </div>

            <input type="submit" value="insert" name="insert">
        </form>
      </div>
    </div>
    <?php include '../../footer.php' ?>
    
</body>

</html>