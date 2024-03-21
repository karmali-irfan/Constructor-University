<?php 
    #getting errors on the page
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);
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
                        <label for='name'>Do you wish to Log out please click Log out: </label><br>
                    </div>
                    <br>
                    <input type="submit" value="Logout" name="admin">
                    <br>
                </form>
            </div>
        </div>
    </div> 
<?php 
    include('./footer.php'); 
?>