# Simon-Says-Game
🎮 Arduino Simon Says Game

A classic Simon Says memory game built using Arduino, 4 LEDs, and a buzzer.
Watch the sequence, listen to the tones, repeat it correctly… or get roasted by the buzzer.

Simple hardware. Pure logic. Surprisingly addictive.

🧠 How the Game Works

The game starts with a random LED sequence

LEDs light up one by one, each with a unique tone

Player repeats the sequence using 4 buttons

Every successful round:

Sequence gets longer

Difficulty increases

Make a mistake:

Buzzer screams

Game resets

Memory > luck. No button mashing allowed.

🧩 Components Required
Component	Quantity
Arduino (UNO / Nano / Mega)	1
LEDs (any color)	4
Push Buttons	4
Buzzer (active or passive)	1
Resistors (220Ω for LEDs)	4
Resistors (10kΩ for buttons)	4
Breadboard	1
Jumper Wires	As needed
🔌 Pin Configuration (Example)
Function	Arduino Pin
LED 1	D2
LED 2	D3
LED 3	D4
LED 4	D5
Button 1	D6
Button 2	D7
Button 3	D8
Button 4	D9
Buzzer	D10

You can change pins in code if needed. Arduino doesn’t care. Just be consistent.

⚙️ Game Logic Overview

Random numbers (0–3) represent LED positions

Sequence stored in an array

LEDs blink + buzzer tone plays

Player input is checked step-by-step

Wrong input = instant fail (no mercy)

🚀 How to Run

Assemble the circuit

Open the .ino file in Arduino IDE

Select correct board & port

Upload the code

Press reset and start memorizing

🔊 Sound Feedback

Each LED has a unique tone

Correct input → satisfying beep

Wrong input → long error tone 😬

(Yes, audio feedback helps memory—science, not vibes.)

🛠️ Possible Improvements

Add LCD / OLED for score display

Store high score in EEPROM

Add difficulty modes

Replace buttons with capacitive touch

Turn it into a handheld console 👀
