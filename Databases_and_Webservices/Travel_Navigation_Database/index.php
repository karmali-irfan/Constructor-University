<?php 

    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);

    session_start();
    require_once './connect.php';
    include './header.php'; 
    if(isset($_POST['submit'])){
        echo "lckneoinvoiernvoeinr "; 
        $error = false; 
        if(empty($_POST['origin'])){ 
            echo "<br>Please insert origin"; 
            $error = true; 
        }
        if(empty($_POST['dest'])){ 
            echo "<br>Please insert destination"; 
            $error = true; 
        }
        if($error == false){ 
            $dep = $_POST['origin']; 
            $arr = $_POST['dest']; 
            echo "lckneoinvoiernvoeinr "; 
            $sql = "SELECT * FROM route_path 
            WHERE route_id IN (SELECT route_id FROM route_path WHERE s_name = 'Bremen-Vegesack') 
            INTERSECT 
            SELECT * FROM route_path 
            WHERE route_id IN (SELECT route_id FROM route_path WHERE s_name = 'Bremen-HBF')
            ORDER BY sequences;";
            echo "lckneoinvoiernvoeinr "; 
            $result = $connect-> query($sql);
            echo "lckneoinvoiernvoeinr "; 

            echo "lckneoinvoiernvoeinr"; 
            if($result->num_rows == 0){
                //output data of each row
                while($row = $result->fetch_assoc()) {
                    echo "lckneoinvoiernvoeinr"; 
                    /*
                    echo"<div class='row'>";
                    echo "<p> Station ". $row['s_name'];
                    echo "</div>";
                    */
                }
            }
            else{
                echo "0 results";
            }
        }
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

    <title> Quick Rail | Home Page </title> 
    <div class="homepage">
        <div id="registration-form">
            <div class='fieldset'>
                <legend>Find your Journey!</legend>
                <form action="index.php" method="POST" >
                    <div class='row' >
                        <label for='name'>Full Name</label><br>
                        <input type="text" placeholder="Full Name" id='name' data-required="true" name="name">
                    </div>
                    <label for="s_name">Departure</label>
                    <div class="custom-select">
                        <select id="s_name" name="origin">
                            <option>Select Station</option>
                            <option value="Bremen-HBF" >Bremen-HBF</option>
                            <option value="Hamburg-HBF">Hamburg-HBF</option>
                            <option value="Achim">Achim</option>
                            <option value="Bochum-HBF">Bochum-HBF</option>
                            <option value="Hamburg-HBF">Bremen-Oslebshausen</option>
                            <option value="Hamburg-HBF">Bremen-St.Magnus</option>
                        </select>
                    </div>

                    <label for="s_name">Arrival</label>
                    <div class="custom-select">
                        <select id="s_name" name="dest">
                            <option >Select Station</option>
                            <option value="Bremen-HBF" >Bremen-Vegesack</option>
                            <option value="Hamburg-HBF">Hamburg-HBF</option>
                            <option value="Achim">Achim</option>
                            <option value="Bochum-HBF">Bochum-HBF</option>
                            <option value="Hamburg-HBF">Bremen-Oslebshausen</option>
                            <option value="Hamburg-HBF">Bremen-St.Magnus</option>
                        </select>
                    </div>

                    <br>
                    <div class='row'> 
                        <label for='date'>Date</label> <br> 
                        <input placeholder="date" type="date" id='date'>
                    </div>
                    <input type="submit" value="Search" name="submit">
                </form>
            </div>
        </div>
    </div> 
<?php 
    include('./footer.php'); 
?>