#include "gameframe.h"
#include "Animate.h"

/*int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ) {
	GameFrame *gf = new GameFrame( );

	gf -> DoMainLoop( TRUE );

	delete gf;
}*/

class CurGame : public GameFrame {
	void DrawGameTitle( );
	Animate player;
	void Loadfiles( ) throw( int );
	void DrawGameMain( );
};



void CurGame::DrawGameTitle( ) {
	int _color = GetColor( 0, 255, 128 );
	DrawBox( 0, 0, 640, 240, _color, TRUE );

	
}

void CurGame::Loadfiles( ) throw( int ) {
	int g_handle[ 8 ];
	if( LoadDivGraph( "Resources\player.bmp", 8, 4, 2, 64, 64, g_handle ) == -1 ) {
		throw( -1 );
	}
	player.SetImage( 0, g_handle[ 0 ] );
}

void CurGame::DrawGameMain( ) {
	
}

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ) {
	CurGame *cg = new CurGame( );

	cg -> DoMainLoop( TRUE );

	delete cg;
}