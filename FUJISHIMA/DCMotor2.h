#ifndef DC_MOTER_X2_H
#define DC_MOTER_X2_H


/*
https://akizukidenshi.com/catalog/g/gK-09848/
*/

// #################### DC Motor ####################
#include "./PIN_ASSIGN.h"

// 初期化
void DCM2_Init(int PIN_DC_MOTER3, int PIN_DC_MOTER4);
// 空転させる
void DCM2_COAST(int PIN_DC_MOTER3, int PIN_DC_MOTER4);
// 正転させる
void DCM2_FORWARD(int PIN_DC_MOTER3, int PIN_DC_MOTER4);
// 逆転させる
void DCM2_REVERSE(int PIN_DC_MOTER3, int PIN_DC_MOTER4);
// ブレーキさせる
void DCM2_BRAKE(int PIN_DC_MOTER3, int PIN_DC_MOTER4);

// typedef struct {
// } DcMotor_t;


#endif
