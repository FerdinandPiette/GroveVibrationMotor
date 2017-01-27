#include "GroveVibrationMotor.h"

GroveVibrationMotor::GroveVibrationMotor(GrovePin pins) {
	this->_pinMotor = pins.pin1;
	this->_state = false;
}

void GroveVibrationMotor::_refresh() {
	digitalWrite(this->_pinMotor, this->_state);
}

void GroveVibrationMotor::initialize() {	
	pinMode(this->_pinMotor, OUTPUT);
	this->_refresh();
}

void GroveVibrationMotor::turnOn() {
	this->_state = true;
	this->_refresh();
}

void GroveVibrationMotor::turnOff() {
	this->_state = false;
	this->_refresh();
}

void GroveVibrationMotor::toggle() {
	this->_state ^= true;
	this->_refresh();
}
