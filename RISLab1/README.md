# RIS Lab 1 
This repository is created to showcase all the work we did for RIS Lab 1. The project was done in ROS and a Gazebo Simulator was used. In the end a model of a robot was created and successfully launched in the Gazebo Simulator. 

Scroll down to see pictures

# About the Project

#### Module Name: RIS Lab 1
#### Instructor: Prof. Francessco Maurelli
#### Contributors: Emmanuel Muuo Mutuku, Irfan Karmali & Haani Alnahas 

# Part 1: Nodes, Topics, Messages and Services
In this task, we launched the uuv_gazebo/rexrov_default.launch and inspected the nodes, topics, services it launches and the message/services types they use to communicate respectively.

# Part 2: Controlling the Robot
For the first part of Part 2, a launch file was created to launch rexrov in the world spawned by empty_underwater_world.launch, the launch file also launched the node (teleop_twist_keyboard) which was used to control the simulated ROV in the world. 
The launch file used (rov_teleop.launch) can be found in the directory 

      uuv_simulator/lab_report/lab_report/launch
      
The command below can be used to launch the file.

      roslaunch lab_report rov_teleop.launch 

# Part 3: Forces and Torque Output
For the first part of Part 3, a node was created that publishes forces and torques to control the AUV, this specific node publishes to rexrov/thruster_manager/input. The node, [force_keyboard_control.py](https://github.com/karmali-irfan/Constructor-University/blob/main/RISLab1/scripts/force_keyboard_control.py), can be found in the directory: 

    uuv_simulator/lab_report/lab_report/scripts

For the second part of Part 3, a launch file was created that launches the AUV and the node above. The launch file, new_wrench_control.launch, can be found in the directory:

    uuv_simulator/lab_report/lab_report/launch

# Part 4: Creating your own Robot
This task involves creating and controlling a robot of our own design. A urdf file [(submarine.urdf)](https://github.com/karmali-irfan/Constructor-University/blob/main/RISLab1/urdf_tutorial/urdf/wakanda_marine.urdf) that describes our simple ROV can be found in the directory path 

    urdf_tutorial/urdf

The geometric shapes used include a box size for the base link and 4 cylinders for the two front thrusters and two back thrusters on both the left and right side of the base link. Below is a sample code that describes the robot:

  ### Model of Wakanda_Marine Robot
  <img width="572" alt="Wakanda" src="https://github.com/karmali-irfan/Constructor-University/assets/92548212/5455ede1-ed81-4321-b4c5-ef4db13886d2">

# Part 5: Writing a launch file
A launch file called [display.launch](https://github.com/karmali-irfan/Constructor-University/blob/main/RISLab1/urdf_tutorial/launch/display.launch) was created to launch our ROV in gazebo. The launch file can be found in the directory below: 


    lab_report/urdf_tutorial/launch 
    
  ### Wakanda_Marine Robot in the Gazebo simulation
   <img width="611" alt="12" src="https://github.com/karmali-irfan/Constructor-University/assets/92548212/afa5b5bd-e65a-4e8e-95e3-aaef2a347140">
 
