void setup() {
    pinMode(6, OUTPUT);
  }
  void loop() {
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    delay(1000);
  }
  /*
  void setup() {
This function runs once when the Arduino is powered on or reset. It’s used to set up settings like pin modes.

pinMode(6, OUTPUT);
This sets digital pin 6 as an output pin.

That means we can use this pin to send voltage (to control things like an LED).

}
Closes the setup() function.

void loop() {
This function runs repeatedly (in a loop) as long as the Arduino is powered on. It contains the main logic.

digitalWrite(6, HIGH);
Turns pin 6 ON by sending 5V.

If an LED is connected to this pin, it lights up.

delay(1000);
Pauses the program for 1000 milliseconds (1 second).

So the LED stays ON for 1 second.

digitalWrite(6, LOW);
Turns pin 6 OFF (sends 0V).

This turns the LED off.

delay(1000);
Another 1-second pause.

So the LED stays OFF for 1 second before the loop restarts.

}
Closes the loop() function.

🔁 What this does:
LED turns ON for 1 second

LED turns OFF for 1 second

Repeats this blinking pattern forever.*/
  