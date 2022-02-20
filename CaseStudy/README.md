
# Microwave Oven
## Block Diagram of microwave oven
![block](https://user-images.githubusercontent.com/98802184/154788751-9a05dcb1-2c79-4e28-910c-56a974112796.PNG)

## Components
## Microcontroller
An 8-bit AVR microcontroller is used as the processing unit.It also has programmable general purpose input/output (GPIO) lines, Timers.

##  IR Temperature Sensor 
This sensor gives temperature value to microcontroller.

## LCD Display
It displays timer value and temperature of the oven.

## Switch 
There are two switches one switch is connected to the GPIO pin of the microcontroller so that it reads the status of the door.The other door switch is connected to the path of the AC circuit so that current can flow to the magnetron circuit when the door is closed.

## Relay
It is used to turn on/off the magnetron circuit and the motor is conneted to the relay.

## Buzzer
When the food is warmed the buzzer will indicate in the form of sound.

## High Level Requirements
- Food's liquid water content heats the food.
- Temperature sensor should sense the temperature of the food.
- When food cooked alert the user in the form of buzzer.
- LED display tells the remaining cooking time.



## Low Level Requirements  
- Water,fat and sugar molecules in the food absorbs energy from the microwaves in a process called
dielectric heating.
- The average temperature of the food is sensed via an infrared signal powered by the microwave.
- Once the desired temperature is reached, the buzzer sounds an alarm.
- A microcontroller inside the microwave monitors what button we pushed and updates the display.Microcontroller also monitors the sensors to turn the electronic component on/off and display the oven status.



# Washing Machine
## Block Diagram of washing machine
![Capture](https://user-images.githubusercontent.com/98802184/154812311-a1808b06-765f-4975-b505-423eee6cd5e4.PNG)

# Components
## Power Supply
In the power supply, step down transformer is used to reduce the necessary voltage for the control unit and other components. 

## Microcontroller
Microcontroller is used to control the process of washing cycle and to drive the external output devices such as water inlet valve, water drain 
valve.

## Driver Circuits
The driver circuit gives signal to power electronic devices such as relays, triacs.

## Water level sensor
It detects the water level in the tub.
 
## Mode selector
 It is used to control the wash temperature,the spinning speed, and the delay time.

## Motor control
The motor can be used to agitate the drum (both forwards and in reverse) by switching the field winding with respect to the armature. 
 
 ## High Level Requirements
 - The machine should wash my cloths.
 - It should detect the water level in the tub.
 - After wash procedure begins,the display will show the wash remaining time,spin speed and other function option.


## Low Level Requirements
- To wash my cloths i need to have keypad in that P1 is the program to start the machine and P2 is the program to stop the machine.
- The water level sensor uses a pressure switch to detect the water level in the tub. This switch controls how high the tub fills with water. The big end of the hose connects.
 to the bottom of the tub, while the small end connects to the switch.
- We need to have a timer to set the time for example for level 1 timer is set for 15 sec and for level 4 timer is set for 60 sec.
