#pragma once
#include <Windows.h>
#include <random>

#ifndef __RandomMouseMove_h_
#define __RandomMouseMove_h_

class CMouseEvent {
public:

	//�R���X�g���N�^
	CMouseEvent();
	//�f�X�g���N�^
	~CMouseEvent();

	//�J�[�\���̈ړ��ʂ����߂郁�\�b�h(px)
	void setMovement(int amount) 
	{
		nMovement = amount;
	}
	
	//�ړ����Ԃ̊Ԋu�����߂郁�\�b�h(ms)
	void setMovementTime(int sec) 
	{
		nTime = sec;
	}

	//�}�E�X���ړ������郁�\�b�h
	void MouseActive();

private:

	//�J�[�\�����ړ����郁�\�b�h
	void Movement(int x, int y) 
	{
		SetCursorPos(ptr.x + x, ptr.y + y);
	}

	//������Ԃ����\�b�h
	inline int getRNumber(int a, int b) const throw()
	{
		std::random_device rd;
		std::mt19937 mt(rd());
		std::uniform_int_distribution<int> nNumber(a, b);

		return nNumber(mt);
	}

	//�C���X�^���X�ϐ�
	POINT ptr;
	int nMovement;
	int nTime;

};


#endif // !__RandomMouseMove_h_
