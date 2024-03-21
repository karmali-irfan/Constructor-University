<?php 
    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);
    session_start();

    $host = "localhost";
    $_SESSION['user'] = "group16admin";
    $_SESSION['pass'] = "SupplyFill";
    $dbname = "group16";

    $connect = @mysqli_connect($host, $_SESSION['user'], $_SESSION['pass'], $dbname);
    
    if(mysqli_connect_errno()){
        die("connection error");
    }
?>