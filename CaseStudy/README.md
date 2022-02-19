
# Microwave Oven
## Block Diagram of microwave oven
![block](https://user-images.githubusercontent.com/98802184/154788751-9a05dcb1-2c79-4e28-910c-56a974112796.PNG)

# Componets
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

# High Level Requirements
- Food's liquid water content heats the food.
- Temperature sensor should sense the temperature of the food.
- When food cooked alert the user in the form of buzzer.
- LED display tells the remaining cooking time.



# Low Level Requirements  
- Water,fat and sugar molecules in the food absorbs energy from the microwaves in a process called
dielectric heating.
- The average temperature of the food is sensed via an infrared signal powered by the microwave.
- Once the desired temperature is reached, the buzzer sounds an alarm.
- A microcontroller inside the microwave monitors what button we pushed and updates the display.Microcontroller also monitors the sensors to turn the electronic component on/off and display the oven status.

