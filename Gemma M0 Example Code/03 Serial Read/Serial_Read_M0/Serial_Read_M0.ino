/* Feb 1/20 read and write works in max and Arduino M0
 Connection guide:
 Using potentiometer (slide or dial):
 Left connection to 3.3v on Gemma
 Center connection to A0/A1 on Gemma
 Right connection to GND on Gemma

 once this code is uploaded, open 'serial reader.maxpat' and follow instructions

*/

#if defined(ARDUINO_SAMD_ZERO) && defined(SERIAL_PORT_USBVIRTUAL)
#define Serial SERIAL_PORT_USBVIRTUAL
#endif

void setup() {

Serial.begin(9600);

}

void loop() {
  
//Serial read
int sensorValue00 = analogRead(A0); //here you can change these ports if you want differnet pins to provide input
int sensorValue01 = analogRead(A1);
int sensorValue02 = analogRead(A2);
  // print out the value you read:
  Serial.print(sensorValue00); // remember to change the corrosponding value here
  Serial.print(" ");
  Serial.print(sensorValue01);
  Serial.print(" ");
  Serial.println(sensorValue02);


delay(50);        // delay in between reads for stability


}
