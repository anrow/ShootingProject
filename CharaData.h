#ifndef __CHARA_DATA_H__
#define __CHARA_DATA_H__
#include "Animate.h"

enum HIT_MODE {
	HIT_GHOST,				//����Ȃ�
	HIT_NORMAL,				//������Ώ���
	HIT_HARD,				//�ϋv�͂�����
	HIT_MORTAL				//�s��
};

struct CharaData {
public:
	float x, y;
	Animate *anim;
	int life;
	int image_width;
	int image_height;
	int bounds_width;
	int bounds_height;

	HIT_MODE hit;

};

#endif // !__CHARA_DATA_H__