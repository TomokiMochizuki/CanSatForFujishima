#include "./DCMotor.h"
#include "./DCMotor2.h"

void setup()
{
	// デバック用シリアル通信は9600bps
	Serial.begin(9600);

	DCM_Init(PIN_DC_MOTER1, PIN_DC_MOTER2);			// DCモータを初期化
	DCM2_Init(PIN_DC_MOTER3, PIN_DC_MOTER4);		// DCモータ2を初期化
  DCM_Init(PIN_DC_MOTER5, PIN_DC_MOTER6);     // DCモータを初期化
  DCM2_Init(PIN_DC_MOTER7, PIN_DC_MOTER8);    // DCモータ2を初期化

	Serial.println(F("Init done"));
	delay(300);
}

 Serial.println(F("DCM1 Brake"));
  DCM_BRAKE(PIN_DC_MOTER1, PIN_DC_MOTER2);      // ブレーキ
  delay(2000);      // 5000 ms 待つ
  Serial.println(F("DCM1 Forward"));
  DCM_FORWARD(PIN_DC_MOTER1, PIN_DC_MOTER2);      // 正転
  delay(500);      // 5000 ms 待つ
  Serial.println(F("DCM1 Brake"));
  DCM_BRAKE(PIN_DC_MOTER1, PIN_DC_MOTER2);      // ブレーキ
  delay(2000);      // 5000 ms 待つ
	Serial.println(F("DCM Reverse"));
	DCM_REVERSE(PIN_DC_MOTER1, PIN_DC_MOTER2);			// 逆転
	delay(1000);			// 5000 ms 待つ
	Serial.println(F("DCM1 Brake"));
	DCM_BRAKE(PIN_DC_MOTER1, PIN_DC_MOTER2);			// ブレーキ
	delay(2000);			// 5000 ms 待つ
  Serial.println(F("DCM1 Forward"));
  DCM_FORWARD(PIN_DC_MOTER1, PIN_DC_MOTER2);      // 正転
  delay(500);      // 5000 ms 待つ










//	Serial.println(F("DCM2 Forward"));
//	DCM2_FORWARD(PIN_DC_MOTER3, PIN_DC_MOTER4);			// 正転
//	delay(5000);			// 5000 ms 待つ
//	Serial.println(F("DCM2 Coast"));
//	DCM2_COAST(PIN_DC_MOTER3, PIN_DC_MOTER4);			// 空転
//	delay(5000);			// 5000 ms 待つ
//	Serial.println(F("DCM2 Reverse"));
//	DCM2_REVERSE(PIN_DC_MOTER3, PIN_DC_MOTER4);			// 逆転
//	delay(5000);			// 5000 ms 待つ
//	Serial.println(F("DCM2 Brake"));
//	DCM2_BRAKE(PIN_DC_MOTER3, PIN_DC_MOTER4);			// ブレーキ
//	delay(5000);			// 5000 ms 待つ
//
// Serial.println(F("DCM1 Forward"));
// DCM_FORWARD(PIN_DC_MOTER5, PIN_DC_MOTER6);      // 正転
//  delay(5000);      // 5000 ms 待つ
//  Serial.println(F("DCM1 Coast"));
//  DCM_COAST(PIN_DC_MOTER5, PIN_DC_MOTER6);      // 空転
//  delay(5000);      // 5000 ms 待つ
//  Serial.println(F("DCM1 Reverse"));
//  DCM_REVERSE(PIN_DC_MOTER5, PIN_DC_MOTER6);      // 逆転
//  delay(5000);      // 5000 ms 待つ
//  Serial.println(F("DCM1 Brake"));
//  DCM_BRAKE(PIN_DC_MOTER5, PIN_DC_MOTER6);      // ブレーキ
//  delay(5000);      // 5000 ms 待つ
//
//  Serial.println(F("DCM2 Forward"));
//  DCM2_FORWARD(PIN_DC_MOTER7, PIN_DC_MOTER8);     // 正転
//  delay(5000);      // 5000 ms 待つ
//  Serial.println(F("DCM2 Coast"));
//  DCM2_COAST(PIN_DC_MOTER7, PIN_DC_MOTER8);     // 空転
//  delay(5000);      // 5000 ms 待つ
//  Serial.println(F("DCM2 Reverse"));
//  DCM2_REVERSE(PIN_DC_MOTER7, PIN_DC_MOTER8);     // 逆転
//  delay(5000);      // 5000 ms 待つ
//  Serial.println(F("DCM2 Brake"));
//  DCM2_BRAKE(PIN_DC_MOTER7, PIN_DC_MOTER8);      // ブレーキ
//  delay(5000);      // 5000 ms 待つ
