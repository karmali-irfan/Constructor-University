<?php 
    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);
    include('./header.php'); 
?>

<!DOCTYPE html> 

<style> 
  body {
    background-image: url('./img/hpbanner.png');
    background-repeat: no-repeat ; 
    background-size: cover; 
  }
</style>

<body>
    <title> Quick Rail | Forms Page </title> 
        <h1 id="form-head"> Input Forms </h1> 
        <div class="something left" > 
            <a href="./forms/search/station.php">Station</a> 
            <a href="./forms/insert/train.php">Train</a> 
            <a href="./forms/insert/passenger_register.php">Passenger</a> 
            <a href="./forms/insert/adult.php">Adult</a> 
        </div> 
        <div class="something main" > 
            <a href="./forms/insert/longdist.php">Long Distance</a> 
            <a href="./forms/insert/schedule.php">Schedule</a> 
            <a href="./forms/insert/regional.php">Regional</a>
            <a href="./forms/insert/trainsearch.php">Train Search</a>  
        </div> 
        <div class="something right" > 
            <a href="./forms/insert/route.php">Route</a> 
            <a href="./forms/search/routepath.php">Route Path</a> 
            <a href="./forms/insert/student.php">Student</a> 
            <a href="./forms/search/passenger_finder.php">Passenger Search</a> 
        </div> 
        <div class="something right" > 
        <a href="./forms/search/station_train.php">Station-Train Search</a> 
        </div>

</body> 
    <br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
    <br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
    
<?php 
    include('./footer.php'); 
?>