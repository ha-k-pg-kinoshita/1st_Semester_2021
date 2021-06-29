
#ifndef _ENEMY_H_
#define _ENEMY_H_
#include <stdio.h>
#include <stdlib.h>



class enemy
{
public:
	enemy();
	void InitStatus(const char* enemyName);
	void ShowStatus();

	char Name[32];
	int Hp;
	int Mp = 1;
private:

	int Atk;
	int Def;
};


#endif #pragma once
