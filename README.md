# ArduinoCode

#For making my robot 
Check the L293x datasheet.

The L293D IC has two power supply pins. Pin 16, VCC1, is to power the IC itself, ei., its internal logic. Pin 8, VCC2, is to power the motors.

The maximum logic current (ICC1 MAX) drawn by the driver IC at pin 16 is 60mA. Thus, provided you do not have other things connected to the Arduino that can take the current draw above the limit, it is safe to connect VCC1 of the driver IC directly to the Arduino's 5V pin.

The maximum current you can draw from the 5V pin is around 400 mA, or 900 mA, when the Arduino is powered by an external power adapter.

The maximum current sourced or sinked by each driver input pin (xA) is 100 μA, and by enable pins (EN), it is 10μA, which is well within the limit of the Arduino digital pins, 40mA (not 50 mA!). So you can also safely connect Ax and EN directly to the Arduino.

Coming to the last point, the maximum power current supply by driver outputs (xY) is 600 mA. You cannot source or sink more than 600 mA from the 1Y, 2Y, 3Y and 4Y pins. All of this current will be drawn from pin 8 (VCC2), which is connected to the power supply for the motors, which can be a 9V battery. Note that ICC2 MAX is 1.2 mA. Thus, if the supply voltage of the motors is 5V, you must use another voltage source, like 7805 and not the 5V pin of the Arduino to provide VCC2.

To summarize,

You can connect pin 16 of L293D to Arduino's 5V pin.
You can connect pins 1, 2, 7, 9, 10, 15 of L293D to Arduino's digital pins.
You cannot connect pin 8 of L293D to Arduino's 5V pin.
