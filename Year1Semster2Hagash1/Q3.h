
int sumOfDiv(int data[], int size, int div)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		if (!(data[i] % div))
			sum += data[i];
	return sum;
}
