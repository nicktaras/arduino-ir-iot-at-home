# arduino-ir-iot-at-home

Project Goal:

To control infrared devices with voice control with Alexa, Arduino, and ESP32 device with Infrared trasmitter.

Project Plan:

- Create an Arduino Script that can read and decode new codes (done)
- Create an Arduino Script that can transmit the codes (done)
- POC to ensure the codes are transmitted succesfully from Arduino (done)
- Have a look at AWS IOT Event Driven API's
- POC to ensure we can fire codes from AWS when a command is given / not all the time etc
- Store the database of codes on S3
- Create an Alexa skill and Lambda function that can interpret the intents and return the correct code
- Run server on ESP32 to recieve the incoming commands from AWS and transmit the correct code to the related device
- To release look at how we can commercialise the effort to add devices, via a UI?
