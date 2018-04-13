 ## Introduction to Microprocessors
 
 Greg Reynolds January 2018

  This repository contains the documentation for a short course showing the need for switch debouncing
  when to input to processor is a real mechanical switch. Presentated at AY Jackson HS.
  
It is the rare electrical item that is any more complex than a hair dryer that doesn’t have a small microcontroller in it. 
(UPDATE: Dyson hair dryers have a microcontroller in them to drive their digital motor) Even an electric tooth bush, with its timer,
has a micro in it. So do stoves and refrigerators. Automobiles have probably over 20 micros embedded in components like the fuel injector,
speed controller, entertainment centre, tire pressure monitor, and so on. None of these items appear to be a computer since there is no
mouse, screen, or keyboard. The computer is embedded in the item.

All these micros must have software written for them. This is one of the reasons that it is projected that there will be a real shortage of skilled programmers.

The purpose of this course is to introduce you to these microcontrollers. We will mount an Arduino Nano controller on a prototyping board along with a push button switch and an LED. Then we will write a program to transfer the status of the switch to the LED. Basically, we will be producing a very complicated light switch.
Sounds boringly simple, but even here there are hidden hardware problems which will have to be overcome with software.

One of the many attractions of solving hardware problems with software is the hardware must be put into every product made. Not good for keeping the price down. Software is paid for once. After that it is “free” to put in a product. 

## The Prototyping Board

In engineering, the first time a thing is made, it is usually referred to as the prototype.
In electronics, the prototype is the components in the design connected together to try out the design and see if it works.  These boards provide a relatively convenient way to connect components together. There is an array of square holes on 0.1” spacing. Under the holes are U shaped channels that run under groups of holes. Pushing a wire into a hole drives it into the channel. Another wire driven into another hole that has the same channel under it connects the wires. A drawing below shows what holes have common channels.

The following photo highlights the connections in the protoboard. 

![Protoboard Connections](https://github.com/Reyno31415/intro_to_microprocessors/blob/master/proto2.png)

## The Arduino Nano

 This is little printed circuit board with 25 components. Most important to the user is the Atmel ATmega328 microcontroller and a serial to USB chip that allows us to communicate with the microcontroller.
	The Nano and the switch are probably already mounted on the prototyping board. 
 
 ## The Switch
 
 The switch is soldered to a very small printed circuit board to allow properly spaced pins to be securely inserted in the prototyping board. The switch is probably already inserted into the proto board.
 
 ## The LED
  LEDs only work when the current flows in the right direction so correct insertion into the proto board is critical.  The negative terminal is identified by a small flat portion on the body of the LED. Look carefully. You can usually catch the flat in the light if you turn the LED slowly in your fingers. I find it easier to closely examine the LED for its flat edge before inserting it, and then marking that side of the LED with a black felt tip pen. But then again, your eyes are probably better than mine.
  
 ## The Resistor
  A resistor must be put into line with the LED. The Nano drives too much current into the LED, abusing it. The resistor limits the current.
  
  ## The Arduino IDE (Integrated Development Environment)
  One of the reasons for the popularity of the Arduino series of microcontroller boards is a very friendly (compared with other IDEs) programming interface. This IDE must be installed on the PC that you will use. As well, the USB driver for the USB port on the Nano must also be installed on the PC.
The Arduino Programmer’s Notebook should also be installed for your use. You are encouraged to study this notebook in detail at home. It will give you a very good overview of what you can make the Nano do.
     
