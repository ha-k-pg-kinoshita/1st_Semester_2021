#include "enemy.h"
#include <stdio.h>
#include <stdlib.h>
enemy::enemy()
{   
	
	Hp = 8;
	Mp = 0;
	Atk = 2;
	Def = 1;
	Name[0] = '\0';
	
}
void enemy::InitStatus(const char* enemyName)
{   
	
	int iValue;
	float fValue;
	sprintf_s(Name, 32, "%s", enemyName);
	Hp = 8;
    Mp = 0;
	Atk = 2;
	Def = 1;
	;iValue, fValue;
	
}

void enemy::ShowStatus() 
{


	printf("Enemy Status\n");
	printf("Name:%s, Hp:%d, Mp:%d, Atk:%d, Def:%d\n", Name, Hp, Mp, Atk, Def);
};