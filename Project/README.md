# Problem Statement
Implementation of an Automatic Waste Segregator System using Arduino Uno.

# Description
In this project, a cost effective Automated Waste Segregator system for the segregation of waste at the household level is implemented. The proposed segregator system segregates the waste into two types, viz. wet and dry. Here, Arduino Uno board is used as the main controller and various sensors are used to detect each type of waste, which is segregated and thrown into the respective bins. Using this automatic waste segregator system, the separated wastes can be sent directly for recycling.


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
- ## Ultrasonic Sensor
 This sensor is used to detect the waste in the bin if the bin is full then it sends the message to microcontrller.
 
 
 # Actuator
 - ## Servo Motor
 The servo motor is used to rotate the upper circular disc, and drops the waste in the wet bin.
 - ## DC motor
 The DC motor is used in the  rotation of the lower circular disc (bins).
 
 # LCD Display
 The LCD display prints a message when the bin is full.

