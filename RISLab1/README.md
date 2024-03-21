## RIS Lab 1 
This repository is created to showcase all the work we did for RIS Lab 1. The project was done in ROS and a Gazebo Simulator was used. 

# About the Project

#### Module Name: RIS Lab 1
#### Instructor: Prof. Francessco Maurelli
#### Contributors: Emmanuel Muuo Mutuku, Irfan Karmali & Haani Alnahas 

### Part 1: Nodes, Topics, Messages and Services
In this task, we launched the uuv_gazebo/rexrov_default.launch and inspected the nodes, topics, services it launches and the message/services types they use to communicate respectively.

### Part 2: Controlling the Robot
For the first part of Part 2, a launch file was created to launch rexrov in the world spawned by empty_underwater_world.launch, the launch file also launched the node (teleop_twist_keyboard) which was used to control the simulated ROV in the world. The launch file used (rov_teleop.launch) can be found in the directory 
$uuv_simulator/lab_report/lab_report/launch. 
The command $ roslaunch lab_report rov_teleop.launch can be used to launch the file.



