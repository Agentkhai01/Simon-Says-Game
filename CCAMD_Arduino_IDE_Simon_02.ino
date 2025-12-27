////////////////////////////////////////////////////////////////////////////////////////
// OVERVIEW
////////////////////////////////////////////////////////////////////////////////////////
/*
DESCRIPTION:  This program reads 4 digital inputs and outputs their state to 4 digital 
              outputs. Additionally, it outputs a tone to a buzzer, and prints to the 
              serial monitor.

AUTHOR:       Andre' LaMothe

COMMENTS:     

From internet reverse engineering:

Green – 415 Hz – G#4 (true pitch 415.305 Hz)
Red – 310 Hz – D#4 (true pitch 311.127 Hz)
Yellow – 252 Hz ‐ B3 (true pitch 247.942 Hz)
Blue – 209 Hz – G#3 (true pitch 207.652 Hz)

HISTORY: Version 1.0.

*/

////////////////////////////////////////////////////////////////////////////////////////
// INCLUDES 
////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////
// DEFINES, MACROS AND CONSTANTS
////////////////////////////////////////////////////////////////////////////////////////

// pins for external inputs
const int BLUE_BUTTON_PIN   = 7;
const int GREEN_BUTTON_PIN  = 6;
const int RED_BUTTON_PIN    = 5; 
const int YELLOW_BUTTON_PIN = 4;

// pins for external output to LEDs
const int BLUE_LED_PIN      = 13;
const int GREEN_LED_PIN     = 12;
const int RED_LED_PIN       = 11;
const int YELLOW_LED_PIN    = 10;

const int BUZZER_PIN        = 3; // use this pin for audio, supports PWM

// tones for colors
const int GREEN_TONE        = 415;
const int RED_TONE          = 310;
const int YELLOW_TONE       = 252;
const int BLUE_TONE         = 209;

////////////////////////////////////////////////////////////////////////////////////////
// GLOBALS
////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////
// FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////

void setup() 
{
// the setup function runs once when you press reset or power the board  
// initialize digital pin(s)... 

// initialize output pins
pinMode(RED_LED_PIN, OUTPUT);
pinMode(GREEN_LED_PIN, OUTPUT);
pinMode(BLUE_LED_PIN, OUTPUT);
pinMode(YELLOW_LED_PIN, OUTPUT);

// initialize input pins
pinMode(RED_BUTTON_PIN, INPUT);
pinMode(GREEN_BUTTON_PIN, INPUT);
pinMode(BLUE_BUTTON_PIN, INPUT);
pinMode(YELLOW_BUTTON_PIN, INPUT);

// initialize serial port
Serial.begin( 115200 );

} // end setup

////////////////////////////////////////////////////////////////////////////////////////

void loop() 
{
// the loop function runs over and over again forever

// read button input
if ( !digitalRead(BLUE_BUTTON_PIN) )
  {
  // turn the LED on
  digitalWrite(BLUE_LED_PIN, HIGH);   

  // play tone on buzzer for this color, use frequencies from classic Simon
  tone(BUZZER_PIN, BLUE_TONE, 500);

  Serial.write("\nBLUE button pressed.");
  
  } // end if
else
  {
  // turn the LED on
  digitalWrite(BLUE_LED_PIN, LOW);   
  } // end else


// read button input
if ( !digitalRead(GREEN_BUTTON_PIN) )
  {
  // turn the LED on
  digitalWrite(GREEN_LED_PIN, HIGH);   

  // play tone on buzzer for this color, use frequencies from classic Simon
  tone(BUZZER_PIN, GREEN_TONE, 500);

  Serial.write("\nGREEN button pressed.");
  
  } // end if
else
  {
  // turn the LED on
  digitalWrite(GREEN_LED_PIN, LOW);   
  } // end else

// read button input
if ( !digitalRead(RED_BUTTON_PIN) )
  {
  // turn the LED on
  digitalWrite(RED_LED_PIN, HIGH);   

  // play tone on buzzer for this color, use frequencies from classic Simon
  tone(BUZZER_PIN, RED_TONE, 500);

  // write to serial monitor
  Serial.write("\nRED button pressed.");
  
  } // end if
else
  {
  // turn the LED on
  digitalWrite(RED_LED_PIN, LOW);   
  } // end else



// read button input
if ( !digitalRead(YELLOW_BUTTON_PIN) )
  {
  // turn the LED on
  digitalWrite(YELLOW_LED_PIN, HIGH);   

  // play tone on buzzer for this color, use frequencies from classic Simon
  tone(BUZZER_PIN, YELLOW_TONE, 500);

  Serial.write("\nYELLOW button pressed.");
  
  } // end if
else
  {
  // turn the LED on
  digitalWrite(YELLOW_LED_PIN, LOW);   
  } // end else

// wait for a second...
delay(200);                         

} // end loop

////////////////////////////////////////////////////////////////////////////////////////
