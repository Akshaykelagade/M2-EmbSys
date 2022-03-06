####  Table of Content
    1. Description
    2. Requirements
         2.1 High Level Requirements 
         2.2 Low Level Requirements
    3. Applications and Advantages
    4. SWOT Analysis
    5. 4 W's and 1 H 
    6. Structural Design
         6.1 Block Diagram
         6.2 Components Details
	       a. Controller
           b. Sensors
               - Soil moisture Sensor ( Potentiometer )
               - Temperature Sensor
           c. Actuators - Motor
           d. GPIO - Button
           e. LCD Display
    7. Behavioural Design
         7.1 Flow Chart
         
         
# 1.Description
In this project, a cost effective Automated Waste Segregator system for the segregation of waste at the household level is implemented. The proposed segregator system segregates the waste into two types, viz. wet and dry. Here, Arduino Uno board is used as the main controller and various sensors are used to detect each type of waste, which is segregated and thrown into the respective bins. Using this automatic waste segregator system, the separated wastes can be sent directly for recycling.

# 2.Requirements

## 2.1 High Level Requirements
| Id          |  Description  |    status  |
| :--:        | :--:          |   :--:     |
| HLR1        | The system should segregate the waste into wet and dry      | Implemented |
| HLR2        | The system should display a message when the bin is full    | Implemented |
| HLR3        | The system should open the lid when person come nears to it | Implemented |


## 2.2 Low Level Requirements
| Id          |  Description  |    status   |
| :--:        | :--:          |   :--:      |
| LLR1        | when sensor detects the waste, servo motor is used to differentiate the waste as wet and dry and dumps the waste into their respective bins | Implemented |
| LLR2        | Ultrasonic sensor is used to detect the waste in the bin if the bin is full, then a message is displayed in the LCD                         | Implemented |
| LLR3        | ultrasonic sensor should sense if anyone come close and servo motor should open the door                                                            | Implemented |

 # 3.APPLICATIONS:
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

# 4. Swot Analysis
![swot](https://user-images.githubusercontent.com/98802184/156577136-48b7500f-04f8-4400-9c9b-436542506b9d.PNG)


# 5. 5W's and 1H
![5g and 1h](https://user-images.githubusercontent.com/98802184/156572135-ca89fe40-90f0-4242-b232-298e05739502.PNG)


# 6.Structural Design
## Block Diagram
![block_4](https://user-images.githubusercontent.com/98802184/156924435-69298529-6cdf-46a4-b8a1-e8025ce2cb93.PNG)


# 6.1 Component Details
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

 
 # LCD Display
   The LCD display prints a message when the bin is full.
