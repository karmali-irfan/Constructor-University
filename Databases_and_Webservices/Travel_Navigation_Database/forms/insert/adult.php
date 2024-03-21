<?php 
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
<body>
    <div id="registration-form">
        <div class='fieldset'>
          <legend>Adult Form!</legend>
          <form action="adult_insert.php" method="post" >
            <div class='row'>
              <label for='firstname'>Passenger ID</label>
              <input type="text" placeholder="Passenger ID" id='passengerid' data-required="true" name="p_id">
            </div>
            <div class='row'>
              <label for="studentid">Adult ID</label>
              <input type="text" placeholder="Adult ID" data-required="true" name="adult_id">
            </div>
            <input type="submit" value="Register">
          </form>
        </div>
      </div>

      <?php include '../../footer.php' ?>
</body>

</html>