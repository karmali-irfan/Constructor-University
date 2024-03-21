<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

    include ('../../connectadmin.php');
    if(isset($_POST['create'])){
      if(!$_POST['id']){
        $error.= "<br/>please Enter Train ID";	
      }
      if($_POST['id']){
        $id = $_POST['id']; 
        $query = "SELECT train_id FROM train WHERE train_id = '$id' ";
        $result = mysqli_query($connect, $query); 
        $count = mysqli_num_rows($result); 
        if ($count > 0){
          $error.="<br/> Train ID already exists! ";
        }
      }      
      if(!$_POST['name']){
        $error.="<br/>please Enter Train Name";
      }
      if(!$_POST['origin']){
        $error.="<br/>please Enter Train Origin";
      }
      if(!$_POST['dest']){
        $error.="<br/>please Enter Train Destination";
      }                
      if (isset($error)) {
        echo "There Were error(s) In Your Signup Details :" .$error;	
      } 
      else{
        $id = $_POST['id']; 
        $name = $_POST['name']; 
        $origin = $_POST['origin']; 
        $dest = $_POST['dest']; 
        $query = "INSERT INTO train VALUES('$id', '$name', '$origin', '$dest')";
        if (mysqli_query($connect, $query)) {
          header("Location: ../success.php") ; 
        }
        else {
          echo "<p>Unseccussful insert</p>";
          include './train.php';
          exit();
        }
      }
    }
    include ('./train.php');    
?>