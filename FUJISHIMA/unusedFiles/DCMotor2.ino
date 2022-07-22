#include "./DCMotor.h"
#include "./DCMotor2.h"

DcMotor_t dcmotor2;

void DCM2_Init(int PIN_DC_MOTER3, int PIN_DC_MOTER4) {
	pinMode(PIN_DC_MOTER3, OUTPUT);
	pinMode(PIN_DC_MOTER4, OUTPUT);
	digitalWrite(PIN_DC_MOTER3, LOW);
	digitalWrite(PIN_DC_MOTER4, LOW);
	Serial.println(F("DC Motor 2 init done."));
}

void DCM2_COAST(int PIN_DC_MOTER3, int PIN_DC_MOTER4) {
	digitalWrite(PIN_DC_MOTER3, LOW);
	digitalWrite(PIN_DC_MOTER4, LOW);
}

void DCM2_FORWARD(int PIN_DC_MOTER3, int PIN_DC_MOTER4) {
	digitalWrite(PIN_DC_MOTER3, HIGH);
	digitalWrite(PIN_DC_MOTER4, LOW);
}

void DCM2_REVERSE(int PIN_DC_MOTER3, int PIN_DC_MOTER4) {
	digitalWrite(PIN_DC_MOTER3, LOW);
	digitalWrite(PIN_DC_MOTER4, HIGH);
}

void DCM2_BRAKE(int PIN_DC_MOTER3, int PIN_DC_MOTER4) {
	digitalWrite(PIN_DC_MOTER3, HIGH);
	digitalWrite(PIN_DC_MOTER4, HIGH);
}
