<html>
<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

  require "../header.php";
?>
    <style> 
      body {
        background-image: url('../../img/Background_1.jpg');
        background-repeat: no-repeat ; 
        background-size: cover;
      }
    </style>
    <div id="registration-form">
        <div class='fieldset'>
          <legend>Train information!</legend>
          <form action="station_result.php" method="post">
            <div class='row'>
              <label for="s_name">Train Station</label>
              <div class="custom-select">
                  <select id="_name" name="s_name">
                    <option value="Achim">Achim</option>
                    <option value="Baden">Baden</option>  
                    <option value="Barrien">Barrien</option> 
                    <option value="Bassum">Bassum</option>                 
                    <option value="Bochum-HBF">Bochum-HBF</option>
                    <option value="Bremen-Burg">Bremen-Burg</option>
                    <option value="Bremen-HBF">Bremen-HBF</option> 
                    <option value="Bremen-Hemelingen">Bremen-Hemelingen</option> 
                    <option value="Bremen-Mandorf">Bremen-Mandorf</option>
                    <option value="Bremen-Lesum">Bremen-Lesum</option> 
                    <option value="Bremen-Oslebshausen">Bremen-Oslebshausen</option> 
                    <option value="Bremen-Sebalsbruck">Bremen-Sebalsbruck</option> 
                    <option value="Bremen-St.Magnus">Bremen-St.Magnus</option> 
                    <option value="Bremen-Schonebeck">Bremen-Schonebeck</option> 
                    <option value="Bremen-Walle">Bremen-Walle</option> 
                    <option value="Bremen-Vegesack">Bremen-Vegesack</option> 
                    <option value="Doerverden">Doerverden</option> 
                    <option value="Etelsen">Etelsen</option>
                    <option value="Eystrup">Eystrup</option> 
                    <option value="Hamburg-HBF">Hamburg-HBF</option>
                    <option value="Hannover-HBF">Hannover-HBF</option> 
                    <option value="Kirchweyhen">Kirchweyhen</option> 
                    <option value="Langwedel">Langwedel</option>
                    <option value="Nienburg">Nienburg</option> 
                    <option value="Twistringen">Twistringen</option> 
                    <option value="Verden(Aller)">Verden(Aller)</option>
                    <option value="Wunstorf">Wunstorf</option> 
                  
                  </select>
              </div>
            </div>
            <input type="submit" value="Search For trains">
          </form>
        </div>
      </div>

<?php 
  include '../../footer.php'; 
?>

</html>