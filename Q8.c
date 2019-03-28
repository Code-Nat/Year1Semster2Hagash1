
#include <stdio.h>
#include "Q8.h"

/*int main() */int Q8()
{
	int i, arr[3];
	for (i = 0; i < 3; i++)
	{
		printf("\nPlease input the %d's number to be odered: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	if (arr[0] < arr[1])
	{
		swich2num(&arr[0], &arr[1]);
	}
	if (arr[1] < arr[2])
	{
		swich2num(&arr[1], &arr[2]);

		if (arr[0] < arr[1])
		{
			swich2num(&arr[0], &arr[1]);
		}
	}

	printf("Biggest to smallest: %d %d %d", arr[0], arr[1], arr[2]);

}