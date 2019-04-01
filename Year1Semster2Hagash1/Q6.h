
#include <stdio.h>

void copies(char c, int lastLine)
{
	int line, col;
	if (!(lastLine % 2))
		printf("%d is not an odd number, and there for cant be used", lastLine);
	else
		for (line = 1; line <= lastLine; line += 2)
		{
			for (col = 0; col < (int)(lastLine - line)/2; col++)
			{
				printf(" ");
			}
			for (col = 0; col < line; col++)
			{
				printf("%c", c);
			}
			printf("\n");
		}
}