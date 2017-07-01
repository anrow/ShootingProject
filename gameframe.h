#ifndef __GAME_FRAME_H__
#define __GAME_FRAME_H__

#include <DxLib.h>
#include "Define.h"

enum GAME_STATE {
	NONE,
	GAME_TITLE,
	GAME_MAIN,
	GAME_CLEAR,
	GAME_OVER
};

class GameFrame {
	virtual void DrawGameTitle( );
	virtual void DrawGameMain( );
	virtual void DrawGameClear( );
	virtual void DrawGameOver( );
	virtual void LoadFiles( ) throw( int ) {}
	virtual void InitStage( ) {}

	GAME_STATE g_state;								//�\�����Ă����ʃ��[�h��\���ϐ�

	static unsigned int animCounter;				//�A�j���[�V�����p�J�E���^�[

protected:
	GAME_STATE SetGameState( GAME_STATE state );

public:
	virtual ~GameFrame( ) {};
	void DoMainLoop( int );
	static unsigned int GetAnimCount( );			//animCounter�̎擾
};

#endif // !__GAME_FRAME_H__
