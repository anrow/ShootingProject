#include "GameFrame.h"
#include "Animate.h"
#include "PlayerControl.h"

class ShootGame : public GameFrame {
	PlayerControl playerControl;
	void Loadfiles( ) throw( int );
	void InitStage( );
	void DrawGameMain( );
};

void ShootGame::Loadfiles( ) throw( int ) {
	playerControl.Loadfiles( );
}

void ShootGame::InitStage( ) {
	playerControl.Init( );
}

void ShootGame::DrawGameMain( ) {
	playerControl.Move( );
}

int WINAPI WinMain( HINSTANCE hI, HINSTANCE hP, LPSTR lpC, int nC ) {
	ShootGame *sg = new ShootGame( );
	sg -> DoMainLoop( TRUE );
	delete sg;
}