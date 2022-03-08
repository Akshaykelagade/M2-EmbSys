                                   
   #include <Servo.h>
   #include <LiquidCrystal.h>
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

//Constants:
  int ledPin = 9;  //pin 9 has PWM funtion
  int readValue = 0;//pin A0 to read analog input
  int ledValue =0;

//Variables:
int value; //save analog value
const int ledpin = 13;    //for detecting dry waste
const int ldrPin = A5;
//int ledValue=0;
int ldrStatus=0;
int Ledpin=3;
 

 LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
  const int trigpin = 10;
  const int echopin = 11;
  long duration;
  int distance;
 float cm;

void setup(){
  //Input or output?
   Serial.begin(9600);
   myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  pinMode(ledPin, OUTPUT); 

 pinMode(Ledpin,OUTPUT);

  pinMode(ledpin, OUTPUT);
  pinMode(ldrPin, INPUT);

 pinMode(trigpin, OUTPUT);
 pinMode(echopin, INPUT);
 


}

void loop(){

   readValue = analogRead(A0); //save analog value
   ledValue = map(readValue, 0, 1023, 0, 255);
   analogWrite(ledPin,ledValue);

   int ldrStatus = analogRead(ldrPin);
   ledValue = map(ldrStatus, 0, 1023, 0, 255);
   analogWrite(ledpin,ledValue);
   //int ldrStatus = analogRead(ldrPin);
    digitalWrite(trigpin, LOW);

      delay(2);

      digitalWrite(trigpin, HIGH);

      delayMicroseconds(10);

      digitalWrite(trigpin, LOW);

     duration = pulseIn(echopin, HIGH);

     cm = (duration/58.82);

     distance = cm;
  
   if(readValue<=5)                //wet waste detected
   {
      myservo.write(180);            //  tell servo to rotate 180 degree
      delay(2000);  
      myservo.write(0);              // tell servo to come back to normal position
    delay(2000);             
  }
 
   
  else if (ldrStatus<5)                //dry waste detected
  {
     
    myservo.write(90);              // tell servo to rotate 90 degree
    delay(2000);
    myservo.write(0);              // tell servo to come back to normal position
    delay(2000);              // waits 2 s for the servo to reach the position
  }
  
   
 else if(distance<30)                 //any person detected
    {
     

     myservo.write(180); // Turn Servo back to center position (180 degrees) and open the lid

     delay(2000);

   }

     else if(distance>30)           // when bin is full

    {

      digitalWrite(3,HIGH);    // led goes high

    }
    else
    {

        digitalWrite(3,LOW);
    }
}
 



   

  
  
 




                   
