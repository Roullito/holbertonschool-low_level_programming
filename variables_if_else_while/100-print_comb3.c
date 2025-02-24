#include <stdio.h>

int main (void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a == 8 && a != 9)
			{
				if (a != b)
				{
					if (a * b != 0 || a == 0)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(',');
						putchar(' ');
					}
				}
			}
			
		}
	}

	putchar('\n');

	return (0);
}