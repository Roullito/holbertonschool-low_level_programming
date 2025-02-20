#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * No return because void fonction.
 */

void jack_bauer(void)
{
	int hours = 0;
	char separation = ':';
	int minutes = 0;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(separation);
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');
		_putchar('\n');
	}

	}

}
