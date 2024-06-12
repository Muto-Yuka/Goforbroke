#pragma once
#include <DxLib.h>

class CCollision
{
public:
//３Ｄ
	// ボックスどうし
	static bool CheckHitBoxToBox(VECTOR pos1, VECTOR pos2, VECTOR size1, VECTOR size2);
	// 球どうし
	static bool CheckHitSphereToSphere(VECTOR pos1, VECTOR pos2, float r1, float r2);

//２Ｄ
	//矩形どうし
	static bool IsHitRect(int Ax, int Ay, int Aw, int Ah, int Bx, int By, int Bw, int Bh);
	//円どうし
	static bool IsHitCircle(int Xa, int Xb, int Ya, int Yb, int Ra, int Rb);

};



