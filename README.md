# GroveVibrationMotor
Vibration Motor Library for Arduino + Grove shield

[Link to the tested grove module](http://wiki.seeed.cc/Grove-Vibration_Motor/)

## Example
```c++
#include <Grove.h>
#include <GroveVibrationMotor.h>

GroveVibrationMotor motor(GROVE_D8);

void setup() {
  motor.initialize();
  Serial.begin(9200);
}

void loop() {
  motor.toggle();
  delay(1000);
}
```

## Documentation
###`GroveVibrationMotor(GrovePin pins)`
Parameters:
- `pins`: Must be a digital socket (GROVE_D2 to GROVE_D8)

###`void initialize()`
Initialize the sensor before using it.

###`void turnOn()`
Turn the motor on

###`void turnOff()`
Turn the motor off

###`void toggle()`
Change the motor state (on to off or off to on)