#include<SoftwareSerial.h>

/* Create object named bt of the class SoftwareSerial */ 
SoftwareSerial bt(2,3); /* (Rx,Tx) */  

void setup() {
  bt.begin(38400); /* Define baud rate for software serial communication */
  Serial.begin(38400); /* Define baud rate for serial communication */
}

void loop() {
  
    if (bt.available()) /* If data is available on serial port */
    {
     Serial.write(bt.read()); /* Print character received on to the serial monitor */
    }
}
