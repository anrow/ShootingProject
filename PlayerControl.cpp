#include "PlayerControl.h"

void PlayerControl::Loadfiles( ) throw( int ) {
	int g_handle[ 3 ];
	if( LoadDivGraph( "media\\player.bmp", 3, 3, 1, 48, 32, g_handle ) == -1 ) {
		throw( -1 );
	}

	for( int i = 0; i < 3; i++ ) {
		playerAnim.SetImage( 0, g_handle[ i ] );
	}

	playerAnim.SetGap( 0, 6 );
	g_handle[ 0 ] = LoadGraph( "media\\bullet.bmp" );

	if( g_handle[ 0 ] == -1 ) {
		throw( -1 );
	}
	bulletAnim.SetImage( 0,g_handle[ 0 ] );
}

void PlayerControl::Init( ) {
	player_list.clear( );

	CharaData player;

	player.x = 0;
	player.y = 200;

	player.anim = &playerAnim;

	player.life = 1;

	player.image_width = 48;
	player.image_height = 32;

	player.bounds_width = 20;
	player.bounds_height = 20;

	player.hit = HIT_NORMAL;

	player_list.push_back( player );       //player‚ðlist‚É’Ç‰Á
}

void PlayerControl::Move( ) {
	list<CharaData>::iterator it;
	it = player_list.begin( );
	( *it ).anim -> Draw( 0, ( *it ).x, ( *it ).y );
}