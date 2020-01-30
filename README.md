<H1>Wearables Workshop w/Gemma</H1>

<h2>Outline</h2>
1. The flow <br>
2. Elecctricity <br>
3. Electronics/Hardware <br>
4. Software <br>
5. Putting it together <br>

<h2>1. The Flow</h2>

Environment/body -> Sensor -> microcontroller -> software/process/circuit -> Action<p>
Think of these devices as translators, collecting a measurement of something in the physical world (light, temperature, body position) and using a sensor and code to translate that measurement into something else.
  
  *Max/MSP example*

<h2>2. Electricity</h2>

<h3>Basic electrical formula or Ohm's Law</h3>
V=IR 
Voltage = (resistance)(current) <br>
Volts = ohms x amperage(amps) <br>
Potential energry = (amount of energy used or restriction of energy)(force of the energy)<p>

Water pipe example <br>
height of  = (pipe diameter)(force of water)<br>

<h3>Common Voltages</h3>
Most wall outlets in a home are 120V AC (in North America).<br>
AC alternating current/DC direct current<br>
Most devices DC <br>

<b>Looking at an LED</b>
A red LED uses ~2.2V and 20mA<br>

*What happens if we plugged that into a wall socket?*

Transformer is the device that changes source V and A fromt the supply to the meet the needs of the device. <br>
Look at phone power supply- Input/Output <br>
<img src="images\powerAdp.png"> <br>

<h3>Batteries</h3>
List V and capacity (Ah) amp hours

<h2>3. Electronics/Hardware Basics</h2>

What is a Circuit? Basic loop of energy flow from (+) to Ground
Devices inside the circuit use energy to do work

<h3>Power</h3>


Anatomy of an Arduino <p>
5V - 5 volt power supply<p>
3.3V - 3.3 volt power supply<p>
Vin - input for electricity<p>
GND - ground<p>
A0 - analog read pin<p>
D1 - Digital read/write<p>
  
<h2>4. Software</h2>  
To interact with Arduino products, you need to use the Arduino programming environment. It can be downloaded for free from
<a href="https://www.arduino.cc/en/Main/Software" target="_blank">here<a> <P>

Select the download that matches your operating system (Mac or Windows).

<h3>Anatomy of a patch</h3>
A patch is broken into two parts - setup() and loop().<br>
Setup runs once, and is where variables are established and libraries for specific sensors. Loop is where you put code that will run continously, which is the active part of your program.

<img src="images\blankpatch.png"> <br>

To get started, you can find many examples under <b>File > Examples</b>. Here you can load basic code for a variety of functions. It is very common to load example code and copy/paste it in part or whole into your own program.<p>


https://www.arduino.cc/reference/en/


<h3>Upload patch</h3>
<img src="images\selectGemma.png">

<h2>5. Putting it together</h2>  

<h2>Resources</h2>

https://makecode.adafruit.com/<p>
https://www.youtube.com/watch?v=nL34zDTPkcs<p>
https://learn.sparkfun.com/tutorials/sewing-with-conductive-thread<p>
https://learn.sparkfun.com/tutorials/how-to-read-a-schematic<p>
https://learn.sparkfun.com/tutorials/ir-control-kit-hookup-guide<p>
https://learn.sparkfun.com/tutorials/ir-communication/all<p>
https://learn.adafruit.com/trinket-gemma-ir-remote-control/using-ir-codes-1
