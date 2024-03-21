<?php
    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);
    include('../header.php');
    echo '<h3>"Error: " . $sql . "<br>" . mysqli_error($conn)</h3>';
    include('./footer.php');
?>