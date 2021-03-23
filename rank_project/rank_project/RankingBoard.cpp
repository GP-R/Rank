#include"Ranking.h"
#include<time.h>
void main()
{
	srand((unsigned int)time(NULL));
	PlayInfo player[5];
	Rank rank;
	rank.initRanking(player, MAX_RANK);
	for (int i = 0; i < 5; i++)
	{
		rank.addRanking(player, i, rand() % 500, rand() % 1000 * 0.1);
	}
	rank.loadRanking(player, MAX_RANK, "ranking.txt");
	rank.printRanking(player, MAX_RANK);

	rank.storeRanking(player, MAX_RANK, "ranking.txt");

	return;
	//github push test
}