<?php include 'header.php' 
    #getting errors on the page
    #ini_set('display_errors',1);
    ini_set('log_errors', 1);
    ini_set('error_log', dirname(__FILE__). '/log.txt');
    error_reporting(E_ALL);
?> 

  <link rel="stylesheet" href="./styles/styleexplore.css">
    <script src="index.js"></script>
    <title> Quick Rail | Explore Page </title> 
    <style> 
      body {
        background-image: url('./img/newbanner.jpg');
        background-repeat: no-repeat ; 
      }
    </style>

  <div id="wrap">
    <div id="contentwrap">
      <div id="mainpage">
        <div id="threecolumns">
          <div class="col1">
            <div class="ftbox">
              <div class="ftbox1"></div>
              <div class="ftcontent">
                <div class="post">
                  <h2><a href="#">RS1 Train</a></h2>
                  <img src="img/RS1map.png" width="270" height="140" alt="" class="hboxthumb" />
                  <div class="stops">
                    <p>Verden-Aller -> Bremen Vegesack</p>
                    <p class="stops">Regional Train</p>
                  </div>
                </div>
              </div>
              <div class="ftbox2"></div>
            </div>
            <div class="ftbox">
              <div class="ftbox1"></div>
              <div class="ftcontent">
                <div class="post">
                  <h2><a href="#">RS2 Train</a></h2>
                  <img src="img/RS1map.png" width="270" height="140" alt="" class="hboxthumb" />
                  <div class="stops">
                    <p>Twistringen -> Bremen-HBF</p>
                    <p class="stops">Regional Train</p>
                  </div> 
                </div>
              </div>
              <div class="ftbox2"></div>
            </div>
            <div class="ftbox">
              <div class="ftbox1"></div>
              <div class="ftcontent">
                <div class="post">
                  <h2><a href="#">RE1 Train</a></h2>
                  <img src="img/RS1map.png" width="270" height="140" alt="" class="hboxthumb" />
                  <div class="stops">
                    <p>Hannover-HBF -> Bremen-HBF</p>
                    <p>Regional Train</p>
                  </div> 
                </div>
              </div>
              <div class="ftbox2"></div>
            </div>
          </div>
          <div class="col2">
            <div class="ftbox">
              <div class="ftbox1"></div>
              <div class="ftcontent">
                <div class="post">
                  <h2><a href="#"></a>RE8 Train</h2>
                  <img src="img/RS1map.png" width="270" height="140" alt="" class="hboxthumb" />
                  <div class="stops">
                    <p>Hannover->Bremerhaven-Lehe</p>
                    <p>Regional Train</p>
                  </div> 
                </div>
              </div>
              <div class="ftbox2"></div>
            </div>
            <div class="ftbox">
              <div class="ftbox1"></div>
              <div class="ftcontent">
                <div class="post">
                  <h2><a href="#">RE4 Train</a></h2>
                  <img src="img/RS1map.png" width="270" height="140" alt="" class="hboxthumb" />
                  <div class="stops">
                    <p>Hamburg-HBF -> Bremen-HBF</p>
                    <p class="stops">Regional Train</p>
                  </div> 
                </div>
              </div>
              <div class="ftbox2"></div>
            </div>
            <div class="ftbox">
              <div class="ftbox1"></div>
              <div class="ftcontent">
                <div class="post">
                  <h2><a href="#">ICE1139 Train</a></h2>
                  <img src="img/RS1map.png" width="270" height="140" alt="" class="hboxthumb" />
                  <div class="stops">
                    <p>Bremen-HBF -> Munich-HBF</p>
                    <p>InterCity Train</p>
                  </div> 
                </div>
              </div>
              <div class="ftbox2"></div>
            </div>
          </div>
          <div class="col3">
            <div class="ftbox">
              <div class="ftbox1"></div>
              <div class="ftcontent">
                <div class="post">
                  <h2><a href="#">IC2314 Train</a></h2>
                  <img src="img/RS1map.png" width="270" height="140" alt="" class="hboxthumb" />
                  <div class="stops">
                    <p>Koln-HBF -> Husum</p>
                    <p>InterCity Train</p>
                  </div> 
                </div>
              </div>
              <div class="ftbox2"></div>
            </div>
            <div class="ftbox">
              <div class="ftbox1"></div>
              <div class="ftcontent">
                <div class="post">
                  <h2><a href="#">ICE1025 Train</a></h2>
                  <img src="img/RS1map.png" width="270" height="140" alt="" class="hboxthumb" />
                  <div class="stops">
                    <p>Hamburg-Altona -> Frankfurt-HBF</p>
                    <p>InterCity Train</p>
                  </div> 
                </div>
              </div>
              <div class="ftbox2"></div>
            </div>
            <div class="ftbox">
              <div class="ftbox1"></div>
              <div class="ftcontent">
                <div class="post">
                  <h2><a href="#">IC1933 Train</a></h2>
                  <img src="img/RS1map.png" width="270" height="140" alt="" class="hboxthumb" />
                  <div class="stops">
                    <p>Oldenburg -> Leipzig</p>
                    <p>InterCity Train</p>
                  </div> 
                </div>
              </div>
              <div class="ftbox2"></div>
            </div>
          </div>
        <div class="clear"></div>
      </div>


<?php 
    include('./footer.php'); 
?>