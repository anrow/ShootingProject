#ifndef __ANIMATE_H__
#define __ANIMATE_H__

#include <DxLib.h>
#include "GameFrame.h"
#include <vector>

using namespace std;

class Animate {
	//アニメのパターンの構造体
	struct ANIM_PATTERN {
		vector<int> gh_list;
		int anim_gap;
		ANIM_PATTERN( ) {
			anim_gap = 1;
		}
	};
	vector<ANIM_PATTERN> ap_list;

public:
	Animate( ) {
		ap_list.push_back( ANIM_PATTERN( ) );
	}

	int SetImage( int ap_id, int g_handle );
	int SetGap( int ap_id, int gap );

	void Draw( int ap_id, int x, int y );  
	void Draw( int ap_id, int x, int y, float radius );
};

#endif // !__ANIMATE_H__