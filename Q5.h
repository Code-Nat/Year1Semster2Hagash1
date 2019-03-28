
int biggestOf3(int num1, int num2, int num3)
{
	if (num1 < num2)
		num1 = num2;
	if (num3 > num1)
		return num3;
	else
		return num1;
}