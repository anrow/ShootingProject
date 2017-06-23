#include "gameframe.h"

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ) {
	GameFrame *gf = new GameFrame( );

	gf -> DoMainLoop( TRUE );

	delete gf;
}