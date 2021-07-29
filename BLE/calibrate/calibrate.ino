/*
  Analog input, analog output, serial output

 Reads an analog input pin, maps the result to a range from 0 to 255
 and uses the result to set the pulsewidth modulation (PWM) of an output pin.
 Also prints the results to the serial monitor.

 The circuit:
 * potentiometer connected to analog pin 0.
   Center pin of the potentiometer goes to the analog pin.
   side pins of the potentiometer go to +5V and ground
 * LED connected from digital pin 9 to ground

 created 29 Dec. 2008
 modified 9 Apr 2012
 by Tom Igoe

 This example code is in the public domain.
 // channel one on top two on bottom

 */

// These constants won't change.  They're used to give names
// to the pins used:

const int analogInPin = A0;  
void setup() {
  pinMode(32, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(115200);
  
}

void loop() {
  //int sensorValue = analogRead(analogInPin);
  
  digitalWrite(32, HIGH);
  delay(1000);
  digitalWrite(25, HIGH);
  delay(1000);
  digitalWrite(32, LOW);
  delay(1000);
  digitalWrite(25, LOW);
  delay(1000);
  digitalWrite(32, HIGH);
  delay(1000);
  digitalWrite(25, HIGH);
  delay(1000);
  digitalWrite(32, LOW);
  delay(1000);
  digitalWrite(25, LOW);
  delay(1000);
  //Serial.print("\n sensor X = ");
  
  //Serial.print(sensorValue);
  //Serial.print("\n");
  //if (sensorValue>800)
  //{
  //  digitalWrite(10,HIGH);
   //delay(1000);
   // digitalWrite(10,LOW);
   // }
}
