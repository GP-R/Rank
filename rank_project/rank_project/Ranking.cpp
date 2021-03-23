#include "Ranking.h"

void Rank::loadRanking(PlayInfo player[], int len, const char *filename)
{
	FILE *fp;
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("file open error");
		return;
	}
	for (int i = 0; i < len; i++)
		fscanf(fp, "%d%s%lf", &(player[i].nMove), player[i].name, &(player[i].tElapsed)); // fp파일에 있는 정보를 3개의 변수들에 저장
	fclose(fp);
}

void Rank::storeRanking(PlayInfo player[], int len, const char * filename)
{
	FILE *fp;
	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		printf("file open error");
		return;
	}
	for (int i = 0; i < len; i++)
	{
		fprintf(fp, "%d %s %lf", player[i].nMove, player[i].name, player[i].tElapsed);
		fprintf(fp, "\n");
	}
}

void Rank::printRanking(PlayInfo player[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d %s %lf ", player[i].nMove, player[i].name, player[i].tElapsed);
		printf("\n");
	}
}

int Rank::addRanking(PlayInfo player[], int len, int nmove, double elapsed)
{
	player[len].nMove = nmove;
	player[len].tElapsed = elapsed;
	return 0;
}

void Rank::initRanking(PlayInfo player[], int len)
{
	for (int i = 0; i < len; i++)
	{
		strcpy(player[i].name, "초기화");
		player[i].nMove = 0;
		player[i].tElapsed = 0.0;
	}
}