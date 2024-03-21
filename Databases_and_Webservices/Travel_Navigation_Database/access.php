<?php 
    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

require_once './connect.php'; 
session_start();

//$connect = $_SESSION['connect'];

echo"<p>Obtaining Usernames .......</p>";
if(isset($_POST['admin']) ){
    if($_POST['admin'] == "Login"){
        echo"<p>Obtaining Usernames .......</p>";
        $username = $_POST["username"];
        $password = $_POST["password"];


        $sql = "SELECT * FROM user WHERE u_name='$username';";
        $result = $connect-> query($sql);


        $check1 = $connect-> query($sql);
        if($check1->num_rows > 0){
            echo"<p>checking if success</p>";
            while($row = $result->fetch_assoc()) {
                if($username == $row["u_name"] && $password == $row["pass"]){
                    $_SESSION['access'] = 1;
                    $d = $_SESSION['access'];
                    echo"<p>yeeee it was success $d</p>";
                }
            }
        }
    
    }else{
        $_SESSION['access'] = 0;
    }


    //Here we check if the Value is LOGOUT
    if($_POST['admin'] == "Logout"){
        $_SESSION['access'] = 0;
    }
    $da = $_SESSION['access'];
    echo"<p>a success $da</p>";
    //include './index.php';
    //exit();
    header("Location:./index.php");
    exit();
}
else{
    header("Location:./index.php");
}





?>