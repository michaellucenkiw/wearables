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
  
    <b>*Think of the Max/MSP example of flow and transformation of data*</b>
  
We will facilitate this translation using a flow of electricity.

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
AC (alternating current)/DC (direct current), thoufh most devices use DC <br>

<b>Looking at an LED</b><br>
We will be looking at how to harness electricity and the Gemma to control and LED.<br>
Many simple LEDs use ~2.2V-3.3V and ~20mA<br>

     <b>*What happens if we plugged the LED into a wall socket?*</b>

Very few (if any) household devices uses 120V. A transformer is the device that changes source V and A fromt the supply to the meet the needs of the device. Some devices have this built in, other have it external to the device.<br>
Look at phone power supply- Input/Output. The white cube (apple) is essentially a transformer that changers the 120V to 5V which your phone uses. Below is an the back of a generic charger/transformer.<br>
<img src="images\powerAdp.png"> <br>
Notice the input and output values.

    <b>*What happens if we plugged the LED into this transformer?*</b>

<h3>Batteries</h3>

Batteries are another way to supply electricity to circuits or electrical components. Common household batteries are AA and 9V battery. Batteries often list the voltage and capacity (Ah) amp hours. AA batteries are ~1.5V and 9V are 9V.<br>

    <b>*What happens if we plugged the LED into one of these batteries?*</b> <br>

Batteries come in many voltages and capacities. Many have been developed with voltage specific to small devices used in wearables.

    <b>*check the battery in your kit. What is the Voltage? What if we connect the LED into this battery?* </b><p>
    
Connect the leads of the LED to the battery! If it doesn;t work, flip the LED around.
  
We made a circuit!<p>
  
This is not very efficient or useful circuit format to use, especially for perfomance. How do we make this more complex and useful?<p>


<h2>3. Electronics/Hardware Basics</h2>

Microcontollers! This term refers to a growing class of programable device that supplies power in a controlled and programable way to electrical components. As you have seen, not all wearables or circuits need a controller, but they make automation and more complex and exacting control possible.<p>
  
We are using the Arduino Gemma, a small controller thatcan be easily sewn onto clothing or textiles.<p>
<img src="images\GemmaM0.jpg"> <br>


<b>*which way does the LED go on the battery?*</b><p>

What is a Circuit? Basic loop of energy flow from (+) to Ground
Devices inside the circuit use energy to do work.<br>
Most electrical components are direction specific (polerized).<br>
When connecting components, positive to positive, negative to negative.<br>

<img src="images\basicCircuit.png"> <br>
(photo from https://startingelectronics.org/)


<img src="images\LED.png"> <br>

<h3> Anatomy of the Gemma </h3>

3.3V - 3.3 volt power supply<br>
GND - ground<br>
A0 - analog read pin<br>
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

https://makecode.adafruit.com/<br>
https://www.youtube.com/watch?v=nL34zDTPkcs<br>
https://learn.sparkfun.com/tutorials/sewing-with-conductive-thread<br>
https://learn.sparkfun.com/tutorials/how-to-read-a-schematic<br>
https://learn.sparkfun.com/tutorials/ir-control-kit-hookup-guide<br>
https://learn.sparkfun.com/tutorials/ir-communication/all<br>
https://learn.adafruit.com/trinket-gemma-ir-remote-control/using-ir-codes-1
