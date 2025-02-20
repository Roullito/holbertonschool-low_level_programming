#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int x;
	int y;
	int produit;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			produit = x * y;

			if (produit > 9)
			{
				_putchar((produit / 10) + '0');
				_putchar((produit % 10) + '0');
			}

			else
			{

				if (y > 0 && y <= 9)
				{
					_putchar(' ');
					_putchar(produit + '0');
				}

				else
					_putchar(produit + '0');
			}

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
