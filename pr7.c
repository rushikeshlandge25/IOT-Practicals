char ch;
void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop() {
  ch=Serial.read();
  if(ch=='R' || ch=='r'){
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(1000);
  }
  else if(ch=='Y' || ch=='y'){
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    delay(1000);
  }
  else if(ch=='G' || ch=='g'){
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(1000);
  }
}


/*

Serial.begin(9600) initializes serial communication between the Arduino and a computer 
(or other device) with a baud rate of 9600.
In brief:
It opens a serial port for communication
The parameter 9600 is the baud rate (bits per second)
This enables the Arduino to send and receive text data through the USB connection
Without this line, commands like Serial.read() wouldn't work

This is essential for your program because it needs to receive the characters
 ('R', 'Y', 'G') from the user typing on the computer. The baud rate (9600) must 
 match on both the Arduino and the Serial Monitor for successful communication.
 RetryClaude can make mistakes. Please double-check responses. 3.7 Sonnet
*/