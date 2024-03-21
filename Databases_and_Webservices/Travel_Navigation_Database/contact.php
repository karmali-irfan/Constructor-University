<?php 
    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);
    include './header.php' ; 
    include './connect/php' ;
    if(isset($_POST['create'])){
        header("Location: ./contact.php"); 
    }
?>

<!DOCTYPE html> 
    <style> 
      body {
        background-image: url('./img/hpbanner.png');
        background-repeat: no-repeat ; 
        background-size: cover;
      }
    </style>
<div class="container">
  <form action="contact.php" method="POST">

    <label for="fname">First Name</label>
    <input type="text" id="fname" name="firstname" placeholder="Your name..">

    <label for="lname">Last Name</label>
    <input type="text" id="lname" name="lastname" placeholder="Your last name..">

    <label for="country">Country</label>
    <select id="country" name="country">
      <option value="australia">Australia</option>
      <option value="canada">Canada</option>
      <option value="usa">USA</option>
      <option value="usa">Germany</option>
      <option value="usa">Rwanda</option>
      <option value="usa">Tanzania</option>
    </select>

    <label for="subject">Subject</label>
    <textarea id="subject" name="subject" placeholder="Write something.." style="height:200px"></textarea>

    <input type="submit" value="submit" name="create"> 

  </form>
</div>
<?php 
    include('./footer.php'); 
?>