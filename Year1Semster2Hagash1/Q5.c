
#include <stdio.h>
#include "Q5.h"
#define numScores 3
#define classSize 10 * numScores

int Q5()
{
	int scores [classSize], low = -1,temp, i, j;
	for (i = 0; i < classSize/numScores; i++)
		for (j = 0; j < numScores; j++)
		{
			printf("Please input %d score of Student number %d\n", 1 + j%numScores, i+1);
			scanf_s("%d", &scores[i*numScores + j]);
		}

	low = biggestOf3(scores[0], scores[1], scores[2]);

	for (i = numScores; i < classSize; i += numScores)
	{
		temp = biggestOf3(scores[i], scores[i + 1], scores[i + 2]);

		if (low > temp)
			low = temp;
	}

	printf("Lowest top score: %d", low);

	return 0;
}