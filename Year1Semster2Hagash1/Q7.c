#include <stdio.h>
#include "Q7.h"

int Q7()
{
	int i;
	for (i = 2; i <= 100; i++)
		if ((isPerfectNumber(i)))
			printf ("%d\n", i);
}