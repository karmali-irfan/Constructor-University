<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <link rel="stylesheet" href="./styles/styles.css">
  </head>
  <body>
    <header>
      <div class="brand"><a href="./index.php">Quick Rail</a></div>
      <nav>
        <ul>
          <?php
          
          #getting errors on the page
          #ini_set('display_errors',1);
          ini_set('log_errors', 1);
          ini_set('error_log', dirname(__FILE__). '/log.txt');
          error_reporting(E_ALL);
          session_start();
            //check for include
            if(isset($_SESSION['access'])){
              if($_SESSION['access'] == 1){
                echo "<div class = 'ad'>";
                echo "<li><FONT>------->  You are logged in as an Admin  <-------</FONT></a></li>";
                echo "</div>";
                if (file_exists('./logout.php')){
                  echo "<li><a href='./logout.php'>Admin LOG OUT <---</a></li>";
                }else{
                  echo "<li><a href='../logout.php'>Admin LOG OUT <---</a></li>";
                }
              }
              else{
                if (file_exists('./admin.php')){
                  echo "<li><a href='./admin.php'>Admin LOG IN <---</a></li>";
                  $da = $_SESSION['access'];
                }
                  
                else{
                  echo "<li><a href='../admin.php'>Admin LOG IN <---</a></li>";
                  $da = $_SESSION['access'];
                }
              }
            }
            else{
              if (file_exists('./admin.php')){
                echo "<li><a href='./admin.php'>Admin LOG IN <---</a></li>";
                $da = $_SESSION['access'];
              }
                
              else{
                echo "<li><a href='../admin.php'>Admin LOG IN <---</a></li>";
                $da = $_SESSION['access'];
              }
            }
          
            if (file_exists('./index.php'))
              echo"<li><a href='./index.php'>Home</a></li>";
            else{
              echo"<li><a href='../index.php'>Home</a></li>";
            }

            //---------------------------------

            if (file_exists('./explore.php'))
              echo"<li><a href='./explore.php'>Explore</a></li>";
            else{
              echo"<li><a href='../explore.php'>Explore</a></li>";
            }

            if (file_exists('./contact.php'))
              echo"<li><a href='./contact.php'>Contact</a></li>";
            else{
              echo"<li><a href='../contact.php'>Contact</a></li>";
            }

            if (file_exists('./forms.php'))
              echo"<li><a href='./forms.php'>Forms</a></li>";
            else{
              echo"<li><a href='../forms.php'>Forms</a></li>";
            }
          ?>
          
          <!-- <li><a href="./index.php">Home</a></li>
          <li><a href="./explore.php">Explore</a></li>
          <li><a href="./contact.php">Contact</a></li>
          <li class="form_link"><a href="./forms.php" >Forms</a></li> -->
        </ul>
      </nav>
      <div class="icon" onclick="toggleMobileMenu(this)">
        <div class="bar1"></div>
        <div class="bar2"></div>
        <div class="bar3"></div>
        <ul class="mobile-menu">
          <li><a href="./index.php">Home</a></li>
          <li><a href="./explore.php">Explore</a></li>
          <li><a href="./contact.php">Contact</a></li>
          <li class="form_link"><a href="./forms.php" >Forms</a></li>
        </ul>
      </div>
    </header>
    <script src="index.js"></script>

