#include"Ranking.h"
#include<time.h>
void main()
{
	srand((unsigned int)time(NULL));
	Rank rank;
	for (int i = 0; i < 5; i++)
	{
		rank.add(i, rand() % 500, rand() % 1000 * 0.1);
	}
	rank.load("ranking.txt");
	rank.print();

	rank.store("ranking.txt");

	return;
	//github push test
}