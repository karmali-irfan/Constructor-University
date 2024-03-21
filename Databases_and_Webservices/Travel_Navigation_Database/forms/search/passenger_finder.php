<?php

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

    include("../header.php");
  
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

    <title> Quick Rail | Passenger Search Form </title> 
    <div id="registration-form">
        <div class='fieldset'>
        <legend>Passenger Finder</legend>
            <form action="passenger_finder_result.php" method="post" >
                <div class='row'>
                    <label for='firstname'>Enter Passenger Name</label>
                    <input type="text" placeholder="Passenger Name" name= "p_name" >
                </div>
            </form>
        </div>
    </div>
    
</body>
</html>

<?php include '../../footer.php' ?>


