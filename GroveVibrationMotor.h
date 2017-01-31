#ifndef GroveLED_H
#define GroveLED_H

#include <Arduino.h>
#include <Grove.h>

class GroveVibrationMotor {
	private:
		unsigned int _pinMotor;
		boolean _state;

	protected:
		void _refresh();
		
	public:
		GroveVibrationMotor();
		virtual ~GroveVibrationMotor() {};
		void initialize(GrovePin pins);
		void turnOn();
		void turnOff();
		void toggle();
};

#endif