# GroveVibrationMotor
Vibration Motor Library for Arduino + Grove shield

[Link to the tested grove module](http://wiki.seeed.cc/Grove-Vibration_Motor/)

## Example
```c++
#include <GroveVibrationMotor.h>

GroveVibrationMotor motor;

void setup() {
  motor.initialize(GROVE_D8);
  Serial.begin(9200);
}

void loop() {
  motor.toggle();
  delay(1000);
}
```

## Documentation

###`void initialize(GrovePin pins)`
Initialize the sensor before using it.

Parameters:
- `pins`: Must be a digital socket (GROVE_D2 to GROVE_D8)

###`void turnOn()`
Turn the motor on

###`void turnOff()`
Turn the motor off

###`void toggle()`
Change the motor state (on to off or off to on)