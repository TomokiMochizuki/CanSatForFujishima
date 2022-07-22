  #include "./DCMotor.h"
#include "./DCMotor2.h"
//#ifndef BTH_H
#define BTH_H

#include "./PIN_ASSIGN.h"
#include <Wire.h>

// #################### Barometer & Thermohygrometer ####################
float a = 0.00;
float pressure = 0.00;
float b = 5000.00;

while (1)
{ 
  if(b >= pressure)
  b = pressure;
  


void BTH_Init();
// センサ値の更新
//void BTH_Update();
// センサ値の表示
//void BTH_Print();
// 気圧の値を取得
float BTH_GetPressure();
// 湿度の値を取得
//float BTH_GetHumidity();
// 温度の値を取得
//float BTH_GetTemperature();

typedef struct {
  float   pressure;
  float   humidity;
  float   temperature;
} BarometerThermohygrometer_t;

if(b+1<=pressure)
{
break;
}
}




void setup()
{
  // デバック用シリアル通信は9600bps
  Serial.begin(9600);

  DCM_Init(PIN_DC_MOTER1, PIN_DC_MOTER2);     // DCモータを初期化
  DCM2_Init(PIN_DC_MOTER3, PIN_DC_MOTER4);    // DCモータ2を初期化
  DCM_Init(PIN_DC_MOTER5, PIN_DC_MOTER6);     // DCモータを初期化
  DCM2_Init(PIN_DC_MOTER7, PIN_DC_MOTER8);    // DCモータ2を初期化

  Serial.println(F("Init done"));
  delay(300);
}


  //Serial.println(F("DCM1 Brake"));
  //DCM_BRAKE(PIN_DC_MOTER1, PIN_DC_MOTER2);      // ブレーキ
  //delay(2000);      // 5000 ms 待つ
  //Serial.println(F("DCM1 Forward"));
  //DCM_FORWARD(PIN_DC_MOTER1, PIN_DC_MOTER2);      // 正転
  //delay(500);      // 5000 ms 待つ
  //Serial.println(F("DCM1 Brake"));
  //DCM_BRAKE(PIN_DC_MOTER1, PIN_DC_MOTER2);      // ブレーキ
  //delay(2000);      // 5000 ms 待つ
  //Serial.println(F("DCM Reverse"));
  //DCM_REVERSE(PIN_DC_MOTER1, PIN_DC_MOTER2);      // 逆転
  //delay(1000);      // 5000 ms 待つ
  //Serial.println(F("DCM1 Brake"));
  //DCM_BRAKE(PIN_DC_MOTER1, PIN_DC_MOTER2);      // ブレーキ
  //delay(2000);      // 5000 ms 待つ
  //Serial.println(F("DCM1 Forward"));
  //DCM_FORWARD(PIN_DC_MOTER1, PIN_DC_MOTER2);      // 正転
  //delay(500);      // 500 ms 待つ
 
