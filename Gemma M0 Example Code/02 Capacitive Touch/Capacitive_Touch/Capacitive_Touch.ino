/*
 Code works with Adafruit Gemma M0
 Code will function using this setup from default, adjust as needed.
 LED (+) to pin D0, (-) to GND
 Wire or conductive object to A1

Code modified Feb 1/20 by Michael Lucenkiw
*/

#include "Adafruit_FreeTouch.h"

long oldState = 0;
int gHue=0;
int BRIGHTNESS=150;

//NEEDS YOUR INPUT ********************

//Which pin is your capacitive touch connect to? A0? A1? A2?
#define CAPTOUCH_PIN A1 //change to A#

// Change this variable to something between your capacitive touch serial readouts for on and off
int touch = 700; //open serial Monitor (magnafitying glass top right) to see readouts
//************************************

Adafruit_FreeTouch qt_1 = Adafruit_FreeTouch(CAPTOUCH_PIN, OVERSAMPLE_4, RESISTOR_50K, FREQ_MODE_NONE);


void setup() {
  Serial.begin(9600);

  if (! qt_1.begin())  
    Serial.println("Failed to begin qt on pin A1");

//NEEDS YOUR INPUT ********************
    pinMode(0, OUTPUT);  //initialize the LED pin change 0 to what ever pin you have LEDs connected to
//************************************

}

void loop() {//This section of code listens for the capacitive touch sensor to be activated
Serial.print(qt_1.measure());
  Serial.write(' ');
  checkpress();
  delay(20);
}


void checkpress() {

// Get current button state.
     long newState =  qt_1.measure();  
    Serial.println(qt_1.measure());
   if (newState > touch && oldState < touch) {
    // Short delay to debounce button.
    delay(20);
    // Check if button is still low after debounce.
    long newState =  qt_1.measure(); }



//NEEDS YOUR INPUT ********************
      if (newState > touch ) {  //this is where you put what you want to happen when gemma is 'touched'
           digitalWrite(0, HIGH);
       delay(20);
    }
    else { //this is where you put what you want to happen when gemma is NOT 'touched'
      digitalWrite(0, LOW);
      delay(20);
    }
//************************************
}
