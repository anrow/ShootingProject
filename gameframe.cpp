#include "GameFrame.h"

void GameFrame::DoMainLoop( int scMode ) {

	ChangeWindowMode( scMode );

	if( DxLib_Init( ) == -1 ) {
		return;
	}

	SetDrawScreen( DX_SCREEN_BACK );

	//----------------------------------------------//
	//�t�@�C���̓ǂݍ���//
	//----------------------------------------------//
	try {
		LoadFiles( );                           
	}
	//��O�������̏ꍇ
	catch( int errorCode ) {
		MessageBox( NULL, "files load error", "Message", MB_OK );     //message���\�������
		return;
	}
	SetGameState( GAME_TITLE );

	//���C�����[�v
	while( ProcessMessage( ) == 0 && CheckHitKey( KEY_INPUT_ESCAPE ) == 0 ) {

		ClsDrawScreen( );

		switch( g_state ) {
			case GAME_TITLE:
				DrawGameTitle( );
				break;
			case GAME_MAIN:
				DrawGameMain( );
				break;
			case GAME_CLEAR:
				DrawGameClear( );
				break;
			case GAME_OVER:
				DrawGameOver( );
				break;
		}
		ScreenFlip( );	
		animCounter++;
	}
	DxLib_End( );
}

GAME_STATE GameFrame::SetGameState( GAME_STATE state ) {
	if( g_state != state ) {
		g_state = state;
		
		if( g_state == GAME_MAIN ) {
			InitStage( );                    
		}
	}
	return g_state;
}

unsigned int GameFrame::GetAnimCount( ) {
	return animCounter;
}

unsigned int GameFrame::animCounter = 0;

void GameFrame::DrawGameTitle( ) {
}
void GameFrame::DrawGameMain( ) {
}
void GameFrame::DrawGameClear( ) {
}
void GameFrame::DrawGameOver( ) {
}