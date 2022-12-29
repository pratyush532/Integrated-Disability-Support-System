#include<SoftwareSerial.h>

/* Create object n,amed bt of the class SoftwareSerial */ 
SoftwareSerial bt(9,8); /* (Rx,Tx) */  

void setup() {
  bt.begin(38400); /* Define baud rate for software serial communication */
  Serial.begin(38400); /* Define baud rate for serial communication */
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for(int i =0;i<=100;i++){
    int sensorValue;
    sensorValue = i;
    int sensorValue2;
    sensorValue2 = i+10;
              bt.print(sensorValue);  
                bt.print(","); 
                bt.print(sensorValue2);  
                bt.print(";");
    Serial.println(i);
  delay(1000);
  }
}

/*
 *   BTserial.print("1234");  
                BTserial.print(",");  
                BTserial.print("1234.0");  
                BTserial.print(",");  
                BTserial.print("1234 hPa");  
                BTserial.print(",");  
                BTserial.print("500 ml/s");  
                BTserial.print(",");  
                BTserial.print(sensorValue);  
                BTserial.print(";");
 */
