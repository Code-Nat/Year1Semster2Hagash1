
int findDigit(int num, int place)
{
	while (place-- && num != 0)
		num /= 10;
	return num % 10;
}
