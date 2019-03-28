
int isPerfectNumber(int num)
{
	int max, sum = 0;
	max = (num / 2);
	while (max > 0)
	{
		if (!(num % max))
			sum += max;
		max--;
	}
	if (sum - num)
		return 0;
	else
		return 1;
}