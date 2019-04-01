
int isSum(int arr[], int size, int num)
{
	int i, j;
	if (arr[size-1]*2 >= num)
		for (i = 0; i < size && arr[i-1]+arr[i] <= num; i++)
			for (j = size - 1; j >= i; j--)
				if (arr[i] + arr[j] == num)
					return 1;
	return 0;
}

