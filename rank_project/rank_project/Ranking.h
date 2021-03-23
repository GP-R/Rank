#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#define MAX_RANK 5
struct PlayInfo {
	char name[80];
	int nMove;
	double tElapsed;
};

class Rank {
	PlayInfo player[MAX_RANK];
	int nMVP = MAX_RANK;
public:
	Rank()
	{
		for (int i = 0; i < nMVP; i++)
		{
			strcpy(player[i].name, "ÃÊ±âÈ­");
			player[i].nMove = 0;
			player[i].tElapsed = 0.0;
		}
	}
	void load(const char *filename);
	void store( const char *filename);
	void print();
	int add(int nmvp, int nmove, double elapsed);
};
