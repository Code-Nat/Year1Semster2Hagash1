#include <stdio.h>
#include "Q1.h"
#include "Q2.h"
#include "Q3.h"
#include "Q6.h"

int main()
{
	int index;
	int number1 = 123, place = 2; //input for targil 1
	int arr2[] = { 1,3,4,6,9 }; //input for Targil 2
	int arr3[] = { 3, 4, 12, 5, 7, 21, 17 }, size = 7, div = 3; //input for Targil 3
	int arr4[] = { 510, 345, 93, 1259, 31, 43, 134, 21,42, 304 }; //input for Targil 4 array of 10
	char c = "g"; int buttomLine = 7; //Input for Targil 6




	do
	{
		printf("\nPlease select a targil number from 1 to 8 or place -1 to exit: ");
		scanf_s("%d", &index);
		printf("\n");

		switch (index)
		{
			//Q1
			case 1: printf("%d", findDigit(123, 6)); break;

			//Q2
			case 2:
				if (isSum(arr2, 5, 12))
					printf("true");
				else
					printf("false");
				break;

			//Q3
			case 3:
				printf ("%d", sumOfDiv(arr3, size, div));
				break;

			//Q4
			case 4:
				//printf("%d", returnLeftDigi(203));
				Q4();
				break;

			//Q5
			case 5:
				Q5();
				break;

			//Q6
			case 6:
				copies('G', 5);
				break;

			//Q7
			case 7:
				Q7();
				break;

			//Q8
			case 8:
				Q8();
				break;

			case -1:
				return 0;

			default:
				printf("that is not a valid reply");
				break;
		}
	} while (1);
}