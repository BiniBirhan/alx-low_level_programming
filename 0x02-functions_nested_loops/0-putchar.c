#include"main.h"

/**
 *main - Entry point
 *Description: program to print_putchar
 * Return: 0 Always (Success
 *
 */
int main(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(put[i])
	}
	_putchar('\n');
	return (0);
}


