#include "RandomMouseMove.h"


//�R���X�g���N�^ �����o�C�j�V�����C�U
CMouseEvent::CMouseEvent() : nMovement(5),nTime(100)
{
}

//�f�X�g���N�^
CMouseEvent::~CMouseEvent()
{
}


//�}�E�X���ړ������郁�\�b�h
void CMouseEvent::MouseActive() 
{
	
	while (true) {
		//���݂̃J�[�\���ʒu���擾
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