<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

  include '../header.php' ;
  
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
        <legend>Station-Train Search!</legend>
        <form action="./station_train_result.php" method="post" >
          <div class='row'>
            <label for="s_name">Departure</label>
            <div class="custom-select">
                <select id="s_name" name="dep">
                  <option value="Bremen-HBF" selected>Bremen-HBF</option>
                  <option value="Hamburg-HBF">Hamburg-HBF</option>
                  <option value="Achim">Achim</option>
                  <option value="Bochum-HBF">Bochum-HBF</option>
                  <option value="Hamburg-HBF">Bremen-Oslebshausen</option>
                  <option value="Hamburg-HBF">Bremen-St.Magnus</option>
                </select>
            </div>

            <div class='row'>
                <label for="s_name">Arrival</label>
                <div class="custom-select">
                    <select id="s_name" name="arr">
                      <option value="Bremen-HBF" selected>Bremen-HBF</option>
                      <option value="Hamburg-HBF">Hamburg-HBF</option>
                      <option value="Achim">Achim</option>
                      <option value="Bochum-HBF">Bochum-HBF</option>
                      <option value="Hamburg-HBF">Bremen-Oslebshausen</option>
                      <option value="Hamburg-HBF">Bremen-St.Magnus</option>
                    </select>
                </div>
            </div>
            
          </div>
          <input type="submit" value="Search">
        </form>
      </div>
    </div>

    <?php include '../../footer.php' ?>
    
</body>

</html>