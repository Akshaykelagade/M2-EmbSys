# Problem Statement
Implementation of an Automatic Waste Segregator System using Arduino Uno.

# Description
In this project, a cost effective Automated Waste Segregator system for the segregation of waste at the household level is implemented. The proposed segregator system segregates the waste into two types, viz. wet and dry. Here, Arduino Uno board is used as the main controller and various sensors are used to detect each type of waste, which is segregated and thrown into the respective bins. Using this automatic waste segregator system, the separated wastes can be sent directly for recycling.

# High Level Requirements
![high level_M2](https://user-images.githubusercontent.com/98802184/155832865-7c3e4098-cb97-4ff5-8e7b-4674bae7f71c.PNG)

# Low Level Requirements 
![LOW level_m2](https://user-images.githubusercontent.com/98802184/155832866-1c50e8dc-9450-4474-85ac-898cfe2155a2.PNG)


# Block Diagram
![wast Block](https://user-images.githubusercontent.com/98802184/155349716-e694d0d0-4714-4b91-8a3f-64309bdeeba3.PNG)

# Component Selected
# Microcontroller
The arduino uno it is one of the preferred boards among arduino family.The Arduino Uno is interfaced with the various modules 
including the rain sensor, LDR sensor,relay,DC motor and servo motor. 

# Sensors
- ## Rain sensor
  The rain sensor is used to detect the wet waste.
 
- ## LDR Sensor
   Laser Transmitter module acts as the source of light. This sensor is used to detects the dry waste.
- ## Ultrasonic Sensor
  This sensor is used to detect the waste in the bin if the bin is full then it sends the message to microcontrller.
  
 
 # Actuator
 - ## Servo Motor
   The servo motor is used to rotate the upper circular disc, and drops the waste in the wet bin.
 - ## DC motor
   The DC motor is used in the  rotation of the lower circular disc (bins).
 
 # LCD Display
   The LCD display prints a message when the bin is full.


# Flow Chart
![flow_m2](https://user-images.githubusercontent.com/98802184/155834977-71686529-236f-465e-8c74-d241af3ed1c0.PNG)
