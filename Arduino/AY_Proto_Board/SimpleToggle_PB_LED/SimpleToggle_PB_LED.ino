    /* SimpleToggle_PB_LED */
    // Added code to turn on LED on startup

#define LEDpin 3
#define SWITCHpin 2

byte LEDstate = HIGH;  //Set to turn on LED
byte SWITCHstate;
byte lastSWITCHstate;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
digitalWrite(SWITCHpin, HIGH);
digitalWrite(LEDpin, LEDstate); //Turn on LED
}


void loop() {
  // put your main code here, to run repeatedly:
  
SWITCHstate = digitalRead(SWITCHpin);
if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
{
    LEDstate = !LEDstate;
    digitalWrite(LEDpin, LEDstate);
    
}
lastSWITCHstate = SWITCHstate;
}
