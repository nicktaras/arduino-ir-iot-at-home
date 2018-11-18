/*  
 *  IR Recieved 
 *  
 *  Usage:
 *  This program will allow you to read the codes from yout infrared devices around the home.
 *  
 *  Instructions if using the MH Sensor Series/KY-033/TCRT5000 / or similar:
 *  D0 - Pin 8
 *  GND - Ground
 *  VCC - 3.3
 *  A0 - AO (not required)
 *  
 */

#include <IRremote.h>

int RECV_PIN = 8; // IR Receiver

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
}
 
void loop() {
  if (irrecv.decode(&results)) {   
    Serial.println(results.value);
    irrecv.resume(); 
  }
  delay(100);
}
