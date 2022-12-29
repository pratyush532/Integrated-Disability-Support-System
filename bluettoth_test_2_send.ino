#include<SoftwareSerial.h>

/* Create object named bt of the class SoftwareSerial */ 
SoftwareSerial bt(2,3); /* (Rx,Tx) */  

void setup() {
  bt.begin(38400); /* Define baud rate for software serial communication */
  Serial.begin(38400); /* Define baud rate for serial communication */
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  bt.print("hello");
  Serial.println("hello");
  bt.print(";;");
  delay(1000);
}
