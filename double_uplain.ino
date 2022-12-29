  
int TriggerPIN1 = 3;
int EchoPIN1 = 2;
int TriggerPIN2 = 5;
int EchoPIN2 = 4;

int const buzzPin = 13;

void setup(){
  pinMode(TriggerPIN1,OUTPUT);
  pinMode(EchoPIN2,INPUT);
  pinMode(TriggerPIN2,OUTPUT);
  pinMode(EchoPIN2,INPUT);
  Serial.begin(9600); 
  }

void loop(){  
  digitalWrite(TriggerPIN1,LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPIN1,HIGH);
  delayMicroseconds(2);
  digitalWrite(TriggerPIN1,LOW);

  long timedelay = pulseIn(EchoPIN1,HIGH);
  int distance1 = 0.0343 * (timedelay/2);

  if (distance1 <= 20 && distance1 >= 0) {
      // Buzz
      digitalWrite(buzzPin, HIGH);
    } else {
      // Don't buzz
      digitalWrite(buzzPin, LOW);
    }
    // Waiting 60 ms won't hurt any one

  Serial.print("Sensor 1 : ");
  Serial.println(distance1);

  delayMicroseconds(2);

  digitalWrite(TriggerPIN2,LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPIN2,HIGH);
  delayMicroseconds(2);
  digitalWrite(TriggerPIN2,LOW);

  long td = pulseIn(EchoPIN2,HIGH);
  int distance2 = 0.0343 * (td/2);

   if (distance2 <= 20 && distance2 >= 0) {
      // Buzz
      digitalWrite(buzzPin, HIGH);
    } else {
      // Don't buzz
      digitalWrite(buzzPin, LOW);
    }
    // Waiting 60 ms won't hurt any one

  Serial.print("Sensor 2 : ");
  Serial.println(distance2);
  }
