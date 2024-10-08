#include "include.h"

Enemy enemy[D_ENEMY_MAX];
DWORD createEnemyTime = 0;

void EnemyInit()
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		enemy[i].x = 0;
		enemy[i].y = 0;
		enemy[i].isAlive = false;
	}
}

void EnemyUpdate()
{                     // 1000tick = 1000ms = 1초
	if (createEnemyTime < GetTickCount())
	{
		createEnemyTime = GetTickCount() + 100;
		CreateEnemy(rand() % 120, -1);
	}

	EnemyMove();
	EnemyClipping();
	BulletEnemyCollision();
}

void EnemyDraw()
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (enemy[i].isAlive)
			DrawChar(enemy[i].x, enemy[i].y, ' ', RED_BOX);
	}
}

void EnemyMove()                                              
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (enemy[i].isAlive)
			enemy[i].y++;
	}
}

void EnemyClipping()
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (enemy[i].isAlive && enemy[i].y > 30)
			enemy[i].isAlive = false;
	}
}

void CreateEnemy(int x, int y)
{
	for (int i = 0; i < D_ENEMY_MAX; i++)
	{
		if (enemy[i].isAlive == false)
		{
			enemy[i].x = x;
			enemy[i].y = y;
			enemy[i].isAlive = true;
			break;
		}
	}
}

void BulletEnemyCollision()
{
	for (int i = 0; i < D_BULLET_MAX; i++)
	{
		if (bullets[i].isAlive)
		{
			for (int j = 0; j < D_ENEMY_MAX; j++)
			{
				if (enemy[j].isAlive && 
					bullets[i].x == enemy[j].x && 
					(bullets[i].y == enemy[j].y || bullets[i].y + 1 == enemy[j].y))
				{
					CreateEffect(enemy[j].x, enemy[j].y);
					bullets[i].isAlive = false;
					enemy[j].isAlive = false;    
					break;         //다음 총알 검사 할 수 있게 break
				}
			}
		}
	}
}
