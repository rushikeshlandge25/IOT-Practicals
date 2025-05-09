import RPi.GPIO as GPIO
import time
GPIO.setwarnings(False)          # Disable GPIO warnings
GPIO.setmode(GPIO.BOARD)         # Use physical pin numbering
GPIO.setup(11, GPIO.OUT)         # Set pin 11 as output
while True:
    GPIO.output(11, True)        # Turn on
    time.sleep(2)                # Wait 2 seconds
    GPIO.output(11, False)       # Turn off
    time.sleep(2)                # Wait 2 seconds
