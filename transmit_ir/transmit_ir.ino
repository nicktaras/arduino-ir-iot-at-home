/*  
 *  IR Transmit 
 *  
 *  Usage:
 *  This program will allow you transmit ir codes to your devices.
 *  
 *  S = Analogue Pin 3 (for Arduino Uno)
 *  Middle = 5V 
 *  - = GND
 */

 #include <IRremote.h>

IRsend irsend;

void setup(){}

void loop() {
 for (int i = 0; i < 3; i++) {
    irsend.sendNEC(0x1FE48B7, 32);
    delay(40);
  }
  delay(5000);
}




