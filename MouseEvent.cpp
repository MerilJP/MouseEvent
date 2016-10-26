#include "RandomMouseMove.h"


//デフォルトコンストラクタ
CMouseEvent::CMouseEvent() : nMovement(5),nTime(100)
{
}

//デストラクタ
CMouseEvent::~CMouseEvent()
{
}


//マウスを移動させるメソッド
void CMouseEvent::MouseActive() 
{
	
	while (true) {
		//現在のカーソル位置を取得
		GetCursorPos(&ptr);
		switch (getRNumber(1, 4))
		{
		case 1: Movement(nMovement, 0);		break;
		case 2: Movement(-nMovement, 0);	break;
		case 3: Movement(0, nMovement);		break;
		case 4: Movement(0, -nMovement);	break;
		}
		Sleep(nTime);

	}

}
