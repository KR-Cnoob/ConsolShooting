#pragma once

//����ü ����(struct �̸�)
struct Player    //����ü(�Ǵ� ����� ���� �ڷ���)
{
	int x;    //��� ����
	int y;
};

void PlayerInit();
void PlayerDraw();
void PlayerUpdate();

void PlayerMove();
void PlayerClipping();