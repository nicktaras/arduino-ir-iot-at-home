/*  
 *  IR Recieved 
 *  
 *  See:
 *  https://learn.adafruit.com/using-an-infrared-library/hardware-needed
 *  
 *  Usage:
 *  This program will allow you to decode and read the codes from your infrared devices around the home.
 *  
 *  Example Output:
 *  Decoded NEC(1): Value:1FE48B7 Adrs:0 (32 bits) 
 *  
 *  Instructions if using the MH Sensor Series/KY-033/TCRT5000 / or similar:
 *  D0 - Pin 2
 *  GND - Ground
 *  VCC - 3.3
 *  
 */

#include "IRLibAll.h"
 
// Create a receiver object to listen on pin 2
IRrecvPCI myReceiver(2);
 
// Create a decoder object 
IRdecode myDecoder;   
 
void setup() {
  Serial.begin(9600);
  delay(2000); while (!Serial); // delay for Leonardo
  myReceiver.enableIRIn(); // Start the receiver
  Serial.println(F("Ready to receive IR signals"));
}
 
void loop() {
  // Continue looping until you get a complete signal received
  if (myReceiver.getResults()) {
    myDecoder.decode();           // Decode it
    myDecoder.dumpResults(true);  // Now print results. Use false for less detail
    myReceiver.enableIRIn();      // Restart receiver
  }
}
