# Autonomous Driving Object Detection using Computer Vision

This is a simulation of a robot that uses sensory and perception components to detect objects/obstacles within its environment and autonomously navigate successfully towards its destination. The sensor and perception tools being used are LiDar and Camera respectively. The object detection algorithm that will be used here is YOLO (You Only Look Once) and in particular, Yolov8.

The project will require the installation and use of ROS (Robot Operating System), Gazebo Classic as the simulation platform, and a working Python library to read the code. The default operating system for ROS is Ubuntu Linux. 


## Getting Started

### Pre-requisites

Before installing the packages, several programs need to be installed.


- ROS2 Humble ([Linux](https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html)) ([MAC](https://www.youtube.com/watch?v=GEgVpdZj3tY&ab_channel=MacROS)) ([Windows](https://www.youtube.com/watch?v=F3n0SMAFheM&ab_channel=RoboticsBack-End))
  - For MAC, [Conda](https://docs.conda.io/projects/conda/en/latest/user-guide/install/macos.html) and [Homebrew](https://brew.sh/) is required (_tutorial to install is in the link above_) 
- Gazebo Classic ([Install](https://classic.gazebosim.org/tutorials?tut=install_on_mac&cat=install))
- Python Library ([Install)](https://www.python.org/downloads/)

### Installation

1. Open terminal/cmd
2. Clone the repository to your local machine:

    ```
    git clone https://campus.cs.le.ac.uk/gitlab/hk284/autonomous-driving-object-detection-using-computer-vision.git
    ```

3. Navigate to the project directory:

    ```
    cd autonomous-driving-object-detection-using-computer-vision
    ```

4. (_Optional_) for Mac users:

    ```
    conda activate ros2
    ```

5. Install the packages required:

    ```
    pip install -r requirements.txt
    ```



## Usage

In that same folder:

1. Build the project:

    ```
    colcon build --symlink-install
    ```

2. Source that project:

    ```
    source install/setup.bash
    ```

3. Run the launch configuration file (opens RVIZ and Gazebo):

    ```
    ros2 launch my_package rsp.launch.sim.py
    ```

3. To start navigating, open the RVIZ software:

4. Click on the 2D goal pose:

    ![Alt Text](https://raw.githubusercontent.com/HowardKang00/Autonomous-Driving-Object-Detection-using-Computer-Vision/main/img1.png)

5. Pick a point within the map that is free of space and then click on that point. Drag it to the desired direction of the robot facing:

    ![Alt Text](https://raw.githubusercontent.com/HowardKang00/Autonomous-Driving-Object-Detection-using-Computer-Vision/main/img2.png)

6. The robot will start navigating. You can view it in Gazebo as well:

    ![Alt Text](https://raw.githubusercontent.com/HowardKang00/Autonomous-Driving-Object-Detection-using-Computer-Vision/main/img3.png)


## Acknowledgements

Special thanks to these creators for the dataset, Gazebo world and code inspiration.

- J. Newans, “Describing robots with URDF | Articulated Robotics,” beta.articulatedrobotics.xyz. https://articulatedrobotics.xyz/tutorials/ready-for-ros/urdf/ (accessed Apr. 29, 2024).

- Hartyao, L. (2020). gazebo_models_worlds_collection/worlds/small_city.world at master · leonhartyao/gazebo_models_worlds_collection. Retrieved May 2, 2024, from GitHub website: https://github.com/leonhartyao/gazebo_models_worlds_collection/blob/master/worlds/s mall_city.world

- Azamat, D. (2024, February). container Dataset [Open Source Dataset]. Roboflow Universe. Roboflow. Retrieved April 28, 2024, from https://universe.roboflow.com/daniel-azamat/container-pgart

- asu. (2022, July). 3mod nor2 Dataset [Open Source Dataset]. Roboflow Universe. Roboflow. Retrieved April 28, 2024, from https://universe.roboflow.com/asu-z7wy9/3mod-nor2

- Pradana, W. (2022, April). cinTA Dataset [Open Source Dataset]. Roboflow Universe. Roboflow. Retrieved April 28, 2024, from https://universe.roboflow.com/wawan-pradana/cinta-0e3en

- Garaiman, E. (2022, April). my-dataset Dataset [Open Source Dataset]. Roboflow Universe. Roboflow. Retrieved April 28, 2024, from https://universe.roboflow.com/enrico-garaiman/my-dataset-1kadt

- University, Y. V. (2024, February). car Dataset [Open Source Dataset]. Roboflow Universe. Roboflow. Retrieved April 28, 2024, from https://universe.roboflow.com/yogi-vemana-university/car-2r0ip

- a. (2023, November). yolo_tapdi Dataset [Open Source Dataset]. Roboflow Universe. Roboflow. Retrieved April 28, 2024, from https://universe.roboflow.com/a-fegsv/yolo_tapdi

- Son, C. (2022, April). mailbox Dataset [Open Source Dataset]. Roboflow Universe. Roboflow. Retrieved April 28, 2024, from https://universe.roboflow.com/chanhyeok-son/mailbox

- asd. (2023, June). Trees_big Dataset [Open Source Dataset]. Roboflow Universe. Roboflow. Retrieved April 28, 2024, from https://universe.roboflow.com/asd-p2oza/trees_big
