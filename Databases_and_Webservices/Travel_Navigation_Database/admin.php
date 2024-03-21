<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);
    
    if(!session_status()){
        session_start();
    }
    include './header.php';
?>

<!DOCTYPE html> 

<style> 
  body {
    background-image: url('./img/hpbanner.png');
    background-repeat: no-repeat ; 
    background-size: cover;
  }
</style>

    <title> Quick Rail | Home Page </title> 
    <div class="homepage">
        <div id="registration-form">
            <div class='fieldset'>
                <legend>Admin Page!</legend>
                <form action="./access.php" method="POST" >
                    <div class='row' >
                        <label for='name'>Username: </label><br>
                        <input type="text" placeholder="Username" id='name' data-required="true" name="username">
                    </div>
                    
                    <div class='row' >
                        <label for='name'>password: </label><br>
                        <input type="text" placeholder="Password" id='name' data-required="true" name="password">
                    </div>

                    <br>
                    <input type="submit" value="Login" name="admin">
                    <br>
                    <br>
                    <input type="submit" value="Not an admin &#8594" name="normal_user">
                </form>
            </div>
        </div>
    </div> 
<?php 
    include('./footer.php'); 
?>