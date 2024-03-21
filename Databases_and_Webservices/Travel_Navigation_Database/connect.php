<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);
    
    session_start();
    $host = "localhost";
    $user = "group16";
    $pass = "ourreveal";
    $dbname = "group16";

    if(!isset($_SESSION['access'])){
        $_SESSION['access'] = 0;
    }
      

    $connect = @mysqli_connect($host, $user, $pass, $dbname);
    
    if(mysqli_connect_errno()){
        die("connection error");
    }
?>