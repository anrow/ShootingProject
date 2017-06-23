#ifndef __ANIMATE_H__
#define __ANIMATE_H__

#include <DxLib.h>
#include "gameframe.h"
#include <vector>

using namespace std;

class Animate {
	struct ANIM_PAT {
		vector<int> gh_list;
		int anim_gap;
		ANIM_PAT( ) {
			anim_gap = 1;
		}
	};
	vector<ANIM_PAT> ap_list;

public:
	Animate( ) {
		ap_list.push_back( ANIM_PAT( ) );
	}

	int SetImage( int apid, int g_handle );
	int SetGap( int apid, int gap );

	void Draw( int apid, int x, int y );  
	void Draw( int apid, int x, int y, float rad );

};

#endif // !__ANIMATE_H__

