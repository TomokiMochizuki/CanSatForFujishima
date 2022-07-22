#include "./DCMotor.h"

DcMotor_t dcmotor;

void DCM_Init(int PIN_DC_MOTER1, int PIN_DC_MOTER2) {
	pinMode(PIN_DC_MOTER1, OUTPUT);
	pinMode(PIN_DC_MOTER2, OUTPUT);
	digitalWrite(PIN_DC_MOTER1, LOW);
	digitalWrite(PIN_DC_MOTER2, LOW);
	Serial.println(F("DC Motor init done."));
}

void DCM_COAST(int PIN_DC_MOTER1, int PIN_DC_MOTER2) {
	digitalWrite(PIN_DC_MOTER1, LOW);
	digitalWrite(PIN_DC_MOTER2, LOW);
}

void DCM_FORWARD(int PIN_DC_MOTER1, int PIN_DC_MOTER2) {
	digitalWrite(PIN_DC_MOTER1, HIGH);
	digitalWrite(PIN_DC_MOTER2, LOW);
}

void DCM_REVERSE(int PIN_DC_MOTER1, int PIN_DC_MOTER2) {
	digitalWrite(PIN_DC_MOTER1, LOW);
	digitalWrite(PIN_DC_MOTER2, HIGH);
}

void DCM_BRAKE(int PIN_DC_MOTER1, int PIN_DC_MOTER2) {
	digitalWrite(PIN_DC_MOTER1, HIGH);
	digitalWrite(PIN_DC_MOTER2, HIGH);
}
