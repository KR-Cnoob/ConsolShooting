#pragma once

//구조체 선언(struct 이름)
struct Player    //구조체(또는 사용자 정의 자료형)
{
	int x;    //멤버 변수
	int y;
};

void PlayerInit();
void PlayerDraw();
void PlayerUpdate();

void PlayerMove();
void PlayerClipping();