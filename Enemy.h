#pragma once

struct Enemy
{
	int x;
	int y;
	int isAlive;
};

void EnemyInit();
void EnemyUpdate();
void EnemyDraw();

void EnemyMove();
void EnemyClipping();
void CreateEnemy(int x, int y);

void BulletEnemyCollision();