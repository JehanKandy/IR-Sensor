//...............JehanKandy........................
//........www.jehankandy.com.......................
//........www.github.com/JehanKandy................

//....................IR Sensor....................
//.....................if else.....................


//create Variables.....
int sPin = 3; //sensor OUT pin
int G_LED = 4; //Green LED pin
int R_LED = 5; //Red LED pin
int t = 1000; //delay Time

void setup() {
  //Identify input and outputs..
  pinMode(sPin,INPUT); //sensor pin INPUT 
  pinMode(G_LED,OUTPUT); //Green LED
  pinMode(R_LED,OUTPUT); //Red LED
}

void loop() {
  if(digitalRead(sPin)==HIGH){ //check for the sensor value
    digitalWrite(G_LED,HIGH); //Green LED on
    digitalWrite(R_LED,LOW); //Red LED off
  }
  else{
    digitalWrite(G_LED,LOW); //Green LED on
    digitalWrite(R_LED,HIGH); //Red LED off
  }
}

// ................Thank You......................
