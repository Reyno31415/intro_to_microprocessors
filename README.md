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
