#ifndef __PLAYER_CONTROL_H__
#define __PLAYER_CONTROL_H__

#include "Animate.h"
#include "CharaData.h"
#include <list>

using namespace std;

class PlayerControl {
	list<CharaData> player_list;
	list<CharaData> bullet_list;

	Animate playerAnim;
	Animate bulletAnim;

public:
	void Loadfiles( ) throw( int );
	void Init( );
	void Move( );
};

#endif // !__PLAYER_CONTROL_H__
