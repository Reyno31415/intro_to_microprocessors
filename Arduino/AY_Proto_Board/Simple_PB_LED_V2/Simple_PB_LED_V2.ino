        /*Simple_PB_LED_V1        Greg Reynolds Nov 2016 */
        
// Define two constant names
#define LEDpin 3
#define SWITCHpin 2

// Define a variable name and set LOW
byte LEDstate = LOW;

/* The following function is run once.
   It sets up the I/O pins */
void setup() {
  //Define the pin driving the LED as an output//
pinMode(LEDpin, OUTPUT);
  //Define the pin connected to the switch as an input//
pinMode(SWITCHpin, INPUT);
  // Connect an internal pullup resistor to the switch pin//
digitalWrite(SWITCHpin, HIGH);
}

/* The following function loops continuesly.
   It is the "motor" of the design */
void loop() {
  // Read the status of the switch
LEDstate = digitalRead(SWITCHpin);
  // Write the status of the switch to the LED
digitalWrite(LEDpin, LEDstate);
}
