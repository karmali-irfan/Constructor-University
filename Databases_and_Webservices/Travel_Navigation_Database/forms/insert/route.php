<!DOCTYPE html>
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
        <legend>Route</legend>
        <form action="route_insert.php" method="post" >
          <div class='row'>
              <label for='firstname'>Existing Train ID</label>
              <input type="text" placeholder="Train ID" name= "trainID" >
            </div>

          <div class='row'>
              <label for='firstname'>Route_id</label>
              <input type="text" placeholder="Route_id" name= "route_id" >
            </div>

            <div class='row'>
              <label for='firstname'>Total Stops</label>
              <input type="text" placeholder="No. of Stops" name= "tot" >
            </div>

            <input type="submit" value="Search">
        </form>
      </div>
    </div>
    <?php include '../../footer.php' ?>
    
</body>

</html>