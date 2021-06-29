#include "enemy.h"
#include <stdio.h>
#include <stdlib.h>

void enemy::InitStatus(const char* enemyName)
{
	sprintf_s(Name, 32, "%s", enemyName);
	Hp = 8;
	// Mp = 0;
	Atk = 2;
	Def = 1;

}
void enemy::ShowStatus()
{
	printf("Enemy Status\n");
	printf("Name:%s, Hp:%d, Mp:%d, Atk:%d, Def:%d\n", Name, Hp, Mp, Atk, Def);
};