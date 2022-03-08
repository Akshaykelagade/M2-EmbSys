
 #### Table of content
1.	About the Waste Segregator System
      1.	Description
      2.	State of art
      3.	5W’s & 1H and S.W.O.T analysis
2.	Requirements
      1.	High level requirements
      2.	Low level requirements
3.	Block Diagram and Blocks explanation
      1.	Block Diagram
      2.	Sensors
      3.	Actuators

4.	Architecture
      1.	Behavioural Diagram
      1.	Flow chart
      2.	Structural Diagram
 
5.	Test plan and Output
      1.	High level test plan

6.	Applications
7.	Output
8.	Conclusion
       
 # About the Waste Segregator System     
## 1.1 Description 
In this project, a cost effective Automated Waste Segregator system for the segregation of waste at the household level is implemented. The proposed segregator system segregates the waste into two types, viz. wet and dry. Here, Arduino Uno board is used as the main controller and various sensors are used to detect each type of waste, which is segregated and thrown into the respective bins. Using this automatic waste segregator system, the separated wastes can be sent directly for recycling.

## 1.2 State of art
The main focus of this project is to detect the different types of the waste and throw the waste into their respective bin. Rain sensor is used to detect the wet waste and LDR sensor is used to detect the dry waste ,when the waste is detected servo rotates and throw the waste to the bin. If the bin is full then it display a message saying the bin is full. By combining all these features a final product is made known as Waste Segregator. As the technology is increasing rapidly these kind of automations are very useful in our daily lives.

## 1.3  5W's and 1H
![5g and 1h](https://user-images.githubusercontent.com/98802184/156572135-ca89fe40-90f0-4242-b232-298e05739502.PNG)

##  Swot Analysis
![swot](https://user-images.githubusercontent.com/98802184/156577136-48b7500f-04f8-4400-9c9b-436542506b9d.PNG)


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




# 3.Block Diagram and Blocks explanation

## 3.1 Block Diagram
![block_4](https://user-images.githubusercontent.com/98802184/156924435-69298529-6cdf-46a4-b8a1-e8025ce2cb93.PNG)


# Component Details
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

#  4.Architecture
## 4.1 Behavioural Design
 ## 4.1.1 Flow Chart
![flow](https://user-images.githubusercontent.com/98802184/156937415-c4f0530c-d5c2-4d56-9c76-e8da3c67474b.PNG)

## 4.2 Structural Diagram
![Strucral diagarm](https://user-images.githubusercontent.com/98802184/157208472-e1988b04-5e75-4c18-b6c1-d1cd7d9f8998.PNG)

#  5.Test plan and Output
## 5.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| HLR1 | Rain Sensor | Sensor value <5  | Servo motor rotates 180 degrees| Servo motor rotates 180 degrees | ✅ |
| HLR1 | LDR Sensor | Sensor value <5 | Servo motor rotates 90 degrees | Servo motor rotates 90 degrees | ✅ |
| HLR2 | Ultrasonic Sensor | Distance > 30cm | Display message | Display message | ✅ |
| HLR3 | Ultrasonic Sensor | Distance < 30cm |  Servo motor rotates 180 degrees |  Servo motor rotates 180 degrees | ✅ |

# 6.	Applications
•	In underground cities.
•	In municipalities.
•	In clean India mission.
•	Reducing human time and effort
•	Promotes health and sanitation
•	Protects the environment
•	Makes dumping garbage more clean


# 7.	Output
# Subsystem 1
## Detecting wet waste
![subsystem 1](https://user-images.githubusercontent.com/98802184/157080583-13e1244d-c69d-4d73-9fb8-85bc57348d89.PNG)
- In this subsystem potemtiometer is used as rain sensor.When sensor value comes less than 5,then servo motor rotates to 180 degrees,dump the waste in wet bin and come backs to normal position. 

# Subsystem 2
## Detecting dry waste
![subsystem 2](https://user-images.githubusercontent.com/98802184/157085091-60ed6cdd-7717-4584-a18f-a777f2d34d2d.PNG)

- In this subsystem LDR sensor is used to detect the dry waste.When sensor value comes less than 5,then servo motor rotates to 90 degrees,dump the waste in dry bin and come backs to normal position.

# Subsystem 3
## Detect a Person and Open the lid
![subsystem3](https://user-images.githubusercontent.com/98802184/157086363-16039b1f-9c79-44e7-9893-056ff5972524.PNG)

- In this subsystem ultrasonic sensor is used to detect,when a person comes near to the system.If the distance is detected as less the 30 ,then servo motor rotates to 180 degrees,open the lid and close after 2sec and servo motor comes to original position.

# Subsystem 4
## Display message when the bin is full
![subsystem4](https://user-images.githubusercontent.com/98802184/157093517-5042c3ae-990c-4353-b994-f83f89690bad.PNG)
- In this subsystem led is used to indicate when the dust bin is full.


# Complete System
![complete system](https://user-images.githubusercontent.com/98802184/157097435-0b30cc08-f2e6-4e0c-9067-b50854105d94.PNG)
- In this the whole system is presented which shows the all the sensors working and indicating the output in the form of motion of servo motor and blinking of led.


#  8.Conclusion
Automatic Waste Segregator implemented here provides segregation of waste into wet and dry. This type of system can be fabricated in larger dimension for use in various places like educational institutions, offices, hotels, etc. This system is cost effective and reduces the burden of manual separation of the waste. Such an AWS system can reduce health hazards among the workers and the waste can be effectively recycled and reduced. Additional sensors can be included in the proposed system to separate biodegradable and non-biodegradable wastes.
