<H1>Wearables Workshop w/Gemma</H1>

The Gemma M0 is a small, simple electronic device that can be programmed a variety of ways to perform a desired function. Gemma in particular has been designed to be easily sewn onto textiles making it an excellent platform for wearable technology. The power of this technology is that it allows us to transform a movement or condition into some corresponding action such as turning on an LED, sending a command to a software or playing a sound. The following is a basic tutorial on how to interact with a Gemma M0 to create 3 basic functions.

<h2>Outline</h2>
1. The flow <br>
2. Elecctricity <br>
3. Electronics/Hardware <br>
4. Software <br>
5. Putting it together <br>

<h2>1. The Flow</h2>
How do we incorperate a Gemma into an artwork? A good place to start is to understand how information passes through the system as a whole and what story you want to tell through that process <br>

Environment/body -> Sensor -> microcontroller -> software/process/circuit -> Action/Output<p>
Think of these devices as translators, collecting a measurement of something in the physical world (light, temperature, body position) and using a sensor and code to translate that measurement into something else.
  
    *Think of the Max/MSP example of flow and transformation of data*
  
We will facilitate this translation using a flow of electricity in and out of the Gemma and through programmed code inside the Gemma.

<h2>2. Electricity</h2>
This is an extremely brief overview of some key electrical concepts to provide some context for working safely with the Gemma. Electricity has potential to cause harm or even death, but the amount of energy utilized in the Gemma is so small, that its more likely that a compomnet would be damanged than a body part. That being said, it still is required to interact with a wall socket which does contain a dangerious potential of electricty.

<h3>Basic electrical formula or Ohm's Law</h3>
Ohms Law is the most fundimental formula used in basic electronics. You may not have to perform any calculations with it, but you will interact with all the elements the formula references.<br>
      
      V=IR
 -OR-
 
    Voltage = (resistance)(current)
-OR--

    Potential energry = (amount of energy used or restriction of energy)(force of the energy)
    
You can also think about relationship between these variables in terms of water moving through pipes. <br>
height of  = (pipe diameter)(force of water)<br>
<img src="images\pipes.png"> <br>
(image from www.youtube.com G Chang)
    
These are the units that each variable is references:<br>
Volts = ohms x amperage(amps) <br>
These will be on almost all electrical componets used in your wearable projet.

<h3>Common Voltages</h3>
Most wall outlets in a home are 120V AC (in North America).<br>
Current can be in two forms: AC (alternating current) or DC (direct current), though most devices use DC <br>

<h3>Looking at an LED</h3><br>
LEDs are small diodes that emit light when electricty passes through them. We will be looking at how to harness electricity and the Gemma to control and LED in various ways.<br>
Many simple LEDs use ~2.2V-3.3V and ~20mA<br>

     What happens if we plugged the LED into a wall socket?

Very few (if any) household devices uses 120V. A transformer is the device that changes source V and A from the source of electricty to the meet the needs of the device. Some devices have this built in, other have it external to the device.<br>
Look at phone power supply- Input/Output. The white cube (apple) is essentially a transformer that changers the 120V to 5V which your phone uses. Below is an the back of a generic charger/transformer.<br>
<img src="images\powerAdp.png"> <br>
Notice the input and output values.

    What happens if we plugged the LED into this transformer?
<br>It would damage or more likely, destroy, the LED. So how do we power up an LED without damaging it?

<h3>Batteries</h3>

Batteries are another way to supply electricity to circuits or electrical components. Common household batteries are AA and 9V battery. Batteries often list the voltage and capacity (Ah) amp hours. AA batteries are ~1.5V and 9V are 9V.<br>

    What happens if we plugged the LED into one of these batteries?
    
The AA likely wouldn't have enough volts to activate the LED and the 9V has to much and would damage it.<br>

Batteries come in many voltages and capacities. Many have been developed with voltage specific to small devices used in wearables.

    check the battery in your kit. What is the Voltage? What if we connect the LED into this battery? 
    
Connect the leads of the LED to the battery! If it doesn't work, flip the LED around.
  
<b>We made a circuit! </b>.   More on that in a bit...<p>
  
This is not very efficient or useful circuit format to use, especially for perfomance. How do we make this more complex and useful? Stay tuned!<p>


<h2>3. Electronics/Hardware Basics</h2>

Microcontollers! This term refers to a growing class of programable device that supplies power in a controlled and programable way to electrical components. Not all wearables or circuits need a controller, but they make automation and more complex and exacting control possible.<p>
  
We are using the Arduino Gemma M0, a microcontroller, because it can be easily sewn onto clothing or textiles. Pull out your Gemma M0 and have a look at the back. Notice the text that says <b>Vin</b> which designates <b>Voltage in</b>. This information tells you what amount of volts the device can safely operate in.<p>
<img src="images\gemmaBack02.jpg"> <br>
Notice the Vin on the Gemma here is a wider range that the Gemma M0. The older version had different electrical components that safely accepted more voltage. A 9V battery would damage a Gemma M0.

    which way does the LED go on the battery?

Let's go back to the circuit we just made. What is a Circuit? <p>
  
Circuits in their most basic form is a loop of energy flowing from (+) to (-) or Ground. Most electrical components are direction specific (polerized). When connecting components, positive to positive, negative to negative. Looking at your battery, one side is positive as indicated by the (+). The other side is (-). The LED also has a positive and negative lead. The longer of the two arms is the positive lead.<br>
<img src="images\LED.png"> <br>
(photo from https://startingelectronics.org/)<p>

Now pull out the LED sequins from your kit. Notice these too have a positive and negative side.<p>

So in summary, circuits are loops of energy used to do work. In this case, activating the LED is the work.<br>
This is a basic diagram of the circuit we just made.<br>
<img src="images\basicCircuit.png"> <br>

<h3> Anatomy of the Gemma </h3>
Lets have a look at the top of the Gemma and make sense of all the bits.<br>
<img src="images\GemmaM0.jpg"> <br>
The metal conenctor is used to power or data and connects to a computer use USB micro. The black black connector is used to connect a batter with a corresponding clip. Look in your kit for the think black battery case. This is what we will be using to power the Gemma. There is an on/off switch on the board, a reset button in case the code freezes the devices. Then remaining components are the processor and related bits that allow the Gemma to function. One of those functions is regulating power. The Gemma takes between 3 and 6 Volts to power it and supplies a contant 3 volts to any components connected to it.<br>
The gold plated pads around the outside are how we will connect components like our LED.<p>
3Vo - 3 volt power supply to connected components<br>
GND - ground or negative (-), the end of the circuit.<br>
A# - analog read/write pin<br>
D# - Digital read/write<p>

The A and D pins have the capacity to be both analog or digital, depending on how we program the Gemma.
  
<h3>Analog and Digital</h3>
You can think of Analog and Digital as being analogous to Raster and Vector. <br>
Analog allows for an infinate amount of variation to be sensed - or a gradient. For example, if you connect a knob, the analog pin can tell if its turned all the way or just partially.<br>
Digital can only be one of two states: 1 or 0. High or low. On or off. This is useful for detecting if a button is pressed or not.<br>
Some components are analog and some are digital, but no basic component is both. The difference will become more clear when we start to program. <p>
  
Pull out the coin batteries and place them into the battery holder and then connect it to the Gemma. One the Gemma, make sure the switch is set to on<br>

Now pull out the LED with long leads and connect the (+) lead to the 3Vo pad and the (-) lead to the GND pad. Bend the leads in needed.<br>
Now try to connect the (+) lead to on the the A/D pads.<br>
The Gemma shifts electricty to the various pads. Without any programming, the Gemma does not know to send or receive power on any of the pads other than 3Vo which always supplies power to our circuit.<p>
  
How do we get these other pads to do work for us? Programming!<p>

<h2>4. Software</h2>  
To interact with Arduino products, you need to use the Arduino IDE programming environment. It can be downloaded for free from
<a href="https://www.arduino.cc/en/Main/Software" target="_blank">here<a> <P>

Select the download that matches your operating system (Mac or Windows). <p>

<h3>Updating the Arduini IDE software</h3>
Before we can start programming, we need to give the software a few new files to communicate with our Gemma M0 and the patches.<p>

Navigate to <b> Sketch > Include Library > Manage Libraries... </b> and search for and install:

      Adafruit Free Touch
 <img src="images\LibM.png"> <br>
 
This will allow you to incoperate additional code information into your programs. Free Touch specifically allows us to use capacitive touch on the Gemma M0.<p> 
 
You need to install some files to allow the Arduino program to recognize hardware, in this case, Adafruit's Gemma M0. The is a special version of the Gemma M0 that has some additional functionality. To do this we must give the Arduino program a location to find this information. <p>
  
Go to <b> Arduino > Prefrences</b><br>
<img src="images\locate.png"> <br>

Add this address to the "Additional Boards Manager" box.

      https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
 <br>

Go to <b> Tools > Boards > Board Manager...</b>. One the box is open search for:

      Adafruit SAMD Boards
Install the most recent version.

<img src="images\BoardsM.png"> <p>
  
<h3>Connecting the Gemma M0</h3>
Disconnect the battery pack and plug in your USB Micro to the metal data port and then connect it to a USB port on your computer. Make sure the Gemma is switched <b>On</b>.

Navigate to the "tools" menu, and under boards, find <b>Adafruit Gemma M0</b> and select it. This is a different board than the Arduino Gemma M0, so be sure to select the Adafruit version.<br>
<img src="images\selectGemmaM0.png"><br>
In the same Menu, set the <b>Port:</b> to "/dev/cu.usbmodem####" and make sure the <b>Programmer:</b> is "AVRISP mkII". If the Gemma doesn't show up in Port, double click the reset button on the Gemma which should result in the onboard LEDs turing red and green.<p>
  
We are now ready to program!  <i>finally..</i><p>
  
<h3>Anatomy of a Sketch</h3>
When you first open the Arduino IDE, a blank sketch opens. A sketch is where specific code is typed to perform functions for us and allows the Gemma to use the Analog and Digital pads. You can think of a sketch as the same as a patch in Max/MSP. Instead of connecting commands with patch cords, we are using a text base coding language.<p>
  
Sketches are broken into two parts - <b>setup()</b> and <b>loop()</b>. Setup runs once, and is where variables are established and libraries are called up for specific sensors. Loop is where you put code that will run continously, which is the active part of your program. An optional third part is a block of commenting. This will be text dsiplayed in grey and does not perfrom any function in the code, just a place to type instructions and other information. <p>

<img src="images\blankpatch.png"> <br>

To get started, you can find many examples under <b>File > Examples</b>. Here you can load basic code for a variety of functions. It is very common to load example code and copy/paste it in part or whole into your own program.<p>
  
To add more of your own code, you can reference https://www.arduino.cc/reference/en/ to see how to incorperate the various commands available to you.

<b>NOTE:</b> Not all code in examples will run on all microcontrollers **<p>

For this workshop, there are three already prepared sketches that need to be wired up and uploaded, no further modification is required. For each example, navigate to the linked folder and located the text code. Copy and paste the entirety of the text code from the Github window into a completely blank sketch (make sure to delete the default text in the sketch before pasting).<p>
  
Included in the comments are instructions for how to connect each component to the Gemma.<p>

<h3> Example 1 - Blink </h3>
This example will allow you to turn an LED on and off for set times.

Download the code from <a href="Gemma M0 Example Codes\01 Blink" target="_blank">here<a>
  
 
<h3> Example 2 - Capacitive Touch </h3>
This code will allow you to use an condutive object (skin, most metals, etc) into a button that turns an LED on and off  
  
Download the code from <a href="Gemma M0 Example Code\02 Capacitive Touch" target="_blank">here<a>
  
<h3> Example 3 - Serial Communication </h3>
This code will allow you to use a knob or slidder to control objects in Max/MSP.  
  
Download the code from <a href="Gemma M0 Example Code\03 Serial Read" target="_blank">here<a>
  

<h3>Upload patch</h3>
Once you have connected all the components and pasted in the code (and modified it if you are feeling adventurous), its time to upload to sketch to the Gemma M0. In the top left corner of the Arduino IDE window, there is a checkmark and and arrow. The check mark will run a quick test on the code to see if there is an error. The arrow will upload the code to the Gemma M0. Uploading will automatically run a code test. <p>

<img src="images\blankpatch.png"> <br>

If everything is connected correctly, you will get some feedback on the bottom of the window in orange text and the lights on the Gemma will flash. This indicated data is transfering. Once complete, the Gemma should be running your program!<p>
  
The Gemma does not need to be connected to your computer to run, only a power source such as a battery (the USB port also acts as a power source). The Gemma will not loose the sketch you uploaded once it is turned off. Try out the different sketches and see which one works best for you!

<h2>5. Putting it together</h2>  

Take a deep breath, we covered a lot of groung! Now that we have a powered Gemma, running a program with components connected, we can intigrate this into our projects. Wire can be replaced with conductive thread so that the project can truly become wearable. Imagine how you might be able to use this as a tool to extend your body and facilitate interactivity.

<h2>Resources</h2>

https://makecode.adafruit.com/<br>
https://www.youtube.com/watch?v=nL34zDTPkcs<br>
https://learn.sparkfun.com/tutorials/sewing-with-conductive-thread<br>
https://learn.sparkfun.com/tutorials/how-to-read-a-schematic<br>
https://learn.sparkfun.com/tutorials/ir-control-kit-hookup-guide<br>
https://learn.sparkfun.com/tutorials/ir-communication/all<br>
https://learn.adafruit.com/trinket-gemma-ir-remote-control/using-ir-codes-1
