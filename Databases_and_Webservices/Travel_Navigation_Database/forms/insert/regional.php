<!DOCTYPE html>
<?php 

#getting errors on the page
#ini_set('display_errors',1);
ini_set('log_errors', 1);
ini_set('error_log', dirname(__FILE__). '/log.txt');
error_reporting(E_ALL);

  include '../header.php' ;
  if($_SESSION['access'] == 0){
    header("Location: ../admin.php");
    exit();
  }
  if($_SESSION['access'] == 1){
    include ('../connectadmin.php');
  } 
  
?>
<html>
<body>
    <style> 
      body {
        background-image: url('../../img/Background_1.jpg');
        background-repeat: no-repeat ; 
        background-size: cover;
      }
    </style>

  <div id="registration-form">
      <div class='fieldset'>
        <legend>Regional Train Form! This is to be used by Admin only</legend>
        <form action="regional_insert.php" method="post" >
          <div class='row'>
            <label for='train name'>Reg Train id</label>
            <input type="text" placeholder="train id" data-required="true" name = "reg_id">
          </div>

          <div class='row'>
            <label for='train name'>Train Name</label>
            <input type="text" placeholder="Train Name" data-required="true" name = "train_name">
          </div>

          <div class='row'>
            <label for='train name'>Route id</label>
            <input type="text" placeholder="Route_id" data-required="true" name = "route_id">
          </div>

          <div class='row'>
            <label for='train name'>Price    </label>
            <input type="text" placeholder="Pricing in Eur" data-required="true" name = "price">
          </div>
            
          </div>
          <input type="submit" value="Register">
        </form>
      </div>
    </div>

    <?php include '../../footer.php' ?>
    
</body>

</html>