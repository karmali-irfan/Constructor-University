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
    </style>
    <div id="registration-form">
        <div class='fieldset'>
          <legend>Train Search!</legend>
          <form action="trainsearch_insert.php" method="post">
            <div class='row'>
              <label for="train">Train Station</label>
              <div class="custom-select">
                  <select id="train" name="train">
                    <option value="long_Dist">Long Distance</option>
                    <option value="regional">Regional</option>
                  </select>
              </div>
            </div>
            <input type="submit" value="Search For trains" name="submit">
          </form>
        </div>
      </div>


<?php 
    include '../footer.php';
?>

