### Introduction to Microprocessors
 Greg Reynolds

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
