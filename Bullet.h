#pragma once

struct Bullet
{
	int x;
	int y;
	bool isAlive;
};

void BulletInit();
void BulletUpdate();
void BulletDraw();

void BulletMove();
void BulletClipping();
void CreateBullet(int x, int y);
