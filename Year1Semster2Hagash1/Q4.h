#include <stdio.h>

int LeftDigi(int num)
{
	while (1)
		if (num / 10)
			num /= 10;
		else 
			return num;
}

int leftEtoRight(int arr[], int size)
{
	int i;
	for (i = 1; i < size; i++)
		if (LeftDigi(arr[i-1]) != arr[i] % 10)
			return 0;
	return 1;
}
