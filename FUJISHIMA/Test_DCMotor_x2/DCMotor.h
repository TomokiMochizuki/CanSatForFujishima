#ifndef DC_MOTER_H
#define DC_MOTER_H


/*
https://akizukidenshi.com/catalog/g/gK-09848/
*/

// #################### DC Motor ####################
#include "./PIN_ASSIGN.h"

// 初期化
void DCM_Init(int PIN_DC_MOTER1, int PIN_DC_MOTER2);
// 空転させる
void DCM_COAST(int PIN_DC_MOTER1, int PIN_DC_MOTER2);
// 正転させる
void DCM_FORWARD(int PIN_DC_MOTER1, int PIN_DC_MOTER2);
// 逆転させる
void DCM_REVERSE(int PIN_DC_MOTER1, int PIN_DC_MOTER2);
// ブレーキさせる
void DCM_BRAKE(int PIN_DC_MOTER1, int PIN_DC_MOTER2);

typedef struct {
} DcMotor_t;


#endif
