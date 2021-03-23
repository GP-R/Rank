#include "Ranking.h"

void Rank::load(const char *filename)
{
	FILE *fp;
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("file open error");
		return;
	}
	for (int i = 0; i < nMVP; i++)
		fscanf(fp, "%d%s%lf", &(player[i].nMove), player[i].name, &(player[i].tElapsed)); // fp파일에 있는 정보를 3개의 변수들에 저장
	fclose(fp);
}

void Rank::store(const char * filename)
{
	FILE *fp;
	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		printf("file open error");
		return;
	}
	for (int i = 0; i < nMVP; i++)
	{
		fprintf(fp, "%d %s %lf", player[i].nMove, player[i].name, player[i].tElapsed);
		fprintf(fp, "\n");
	}
}

void Rank::print()
{
	for (int i = 0; i < nMVP; i++)
	{
		printf("%d %s %lf ", player[i].nMove, player[i].name, player[i].tElapsed);
		printf("\n");
	}
}

int Rank::add(int nmvp, int nmove, double elapsed)
{
	player[nmvp].nMove = nmove;
	player[nmvp].tElapsed = elapsed;
	return 0;
}