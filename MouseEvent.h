#pragma once
#include <Windows.h>
#include <random>

#ifndef __RandomMouseMove_h_
#define __RandomMouseMove_h_

class CMouseEvent {
public:

	//コンストラクタ
	CMouseEvent();
	//デストラクタ
	~CMouseEvent();

	//カーソルの移動量を決めるメソッド(px)
	void setMovement(int amount) 
	{
		nMovement = amount;
	}
	
	//移動時間の間隔を決めるメソッド(ms)
	void setMovementTime(int sec) 
	{
		nTime = sec;
	}

	//マウスを移動させるメソッド
	void MouseActive();

private:

	//カーソルを移動するメソッド
	void Movement(int x, int y) 
	{
		SetCursorPos(ptr.x + x, ptr.y + y);
	}

	//乱数を返すメソッド
	inline int getRNumber(int a, int b) const throw()
	{
		std::random_device rd;
		std::mt19937 mt(rd());
		std::uniform_int_distribution<int> nNumber(a, b);

		return nNumber(mt);
	}

	//インスタンス変数
	POINT ptr;
	int nMovement;
	int nTime;

};


#endif // !__RandomMouseMove_h_
