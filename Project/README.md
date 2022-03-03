# Problem Statement
Implementation of an Automatic Waste Segregator System using Arduino Uno.

# Description
In this project, a cost effective Automated Waste Segregator system for the segregation of waste at the household level is implemented. The proposed segregator system segregates the waste into two types, viz. wet and dry. Here, Arduino Uno board is used as the main controller and various sensors are used to detect each type of waste, which is segregated and thrown into the respective bins. Using this automatic waste segregator system, the separated wastes can be sent directly for recycling.

# High Level Requirements
| Id          |  Description  |    status  |
| :--:        | :--:          |   :--:     |
| HLR1        | The system should segregate the waste into wet and dry      | Implemented |
| HLR2        | The system should display a message when the bin is full    | Implemented |
| HLR3        | The system should open the lid when person come nears to it | Implemented |


# Low Level Requirements
| Id          |  Description  |    status   |
| :--:        | :--:          |   :--:      |
| LLR1        | when sensor detects the waste, servo motor is used to differentiate the waste as wet and dry and dumps the waste into their respective bins | Implemented |
| LLR2        | Ultrasonic sensor is used to detect the waste in the bin if the bin is full, then a message is displayed in the LCD                         | Implemented |
| LLR3        | ultrasonic sensor should sense if anyone come close and servo motor should open the door                                                            | Implemented |

 # APPLICATIONS:
- In underground cities.
- In municipalities.
- In clean India mission.
- Reducing human time and effort
- Promotes health and sanitation
- Protects the environment
- Makes dumping garbage more clean

 # ADVANTAGES
- Easy to handle
- Smart Usage
- Safety

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
