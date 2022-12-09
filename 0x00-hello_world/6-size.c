#include<stdio.h>
/**
 * main -Entry point
 *
 * Return : Always 0 (Success)
 */

int main(void)
{
	int intType;
	int charType;
	int doubleType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(doubleType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
