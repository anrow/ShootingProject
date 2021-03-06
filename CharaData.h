#ifndef __CHARA_DATA_H__
#define __CHARA_DATA_H__
#include "Animate.h"

enum HIT_MODE {
	HIT_GHOST,				//判定なし
	HIT_NORMAL,				//当たれば消滅
	HIT_HARD,				//耐久力を持つ
	HIT_MORTAL				//不死
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