#include "Animate.h"

//�摜�̃Z�b�g
int Animate::SetImage( int ap_id, int g_handle ) {
	if( ap_id >= ap_list.size( ) ) {

		ap_list.push_back( ANIM_PATTERN( ) );                //�V�����A�j���p�^�[���̒ǉ�

		ap_id = ap_list.size( ) - 1;                        //ap_id���ǉ������A�j���p�^�[�����w���悤�ɒ���
	}

	ap_list.at( ap_id ).gh_list.push_back( g_handle );

	return ap_id;
}

//�A�j���[�V�����̃M���b�v(Gap)�̃Z�b�g�@�i1�R�}�̕\�����ԁj
int Animate::SetGap( int ap_id, int gap ) {
	if( ap_id >= ap_list.size( ) ) {

		ap_list.push_back( ANIM_PATTERN( ) );

		ap_id = ap_list.size( ) - 1;
	}

	ap_list.at( ap_id ).anim_gap  = gap;

	return ap_id;
}

//�`��
void Animate::Draw( int ap_id, int x, int y ) {
	if( ap_list.at( ap_id ).gh_list.size( ) > 1 ) {
		int curPat = GameFrame::GetAnimCount( ) / 
						 ap_list.at( ap_id ).anim_gap % ap_list.at( ap_id ).gh_list.size( );

		DrawGraph( x, y, ap_list.at( ap_id ).gh_list.at( curPat ), true );

	} else {

		DrawGraph( x, y, ap_list.at( ap_id ).gh_list.at( 0 ), true );
	}
}

//��]�`��
void Animate::Draw( int ap_id, int x, int y, float radius ) {
	if( ap_list.at( ap_id ).gh_list.size( ) > 1 ) {
		int curPat = GameFrame::GetAnimCount( ) / 
						 ap_list.at( ap_id ).anim_gap % ap_list.at( ap_id ).gh_list.size( );

		DrawRotaGraph( x, y, 1.0, radius, ap_list.at( ap_id ).gh_list.at( curPat ), TRUE, FALSE );

	} else {

		DrawRotaGraph( x, y, 1.0, radius, ap_list.at( ap_id ).gh_list.at( 0 ), TRUE, FALSE );
	}
}