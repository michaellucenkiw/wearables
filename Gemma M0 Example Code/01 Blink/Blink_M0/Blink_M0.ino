/*
  Blink example on Adafruit M0

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  modified 1 Feb 2020
  by Michael Lucenkiw

  Hardware setup
  Code will function using this setup from default, adjust as needed.
  LED (+) to pin D0, (-) to 

*/

// the setup function runs once when you press reset or power the board

void setup() {
  //in setup, establish your pins and variables
  // Determine which pin you are using and what it will function as,
  //analog or digital, input or output
 
  pinMode(0, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //digitalWrite sends a command to a pin (specift what pin, specify the output)
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
