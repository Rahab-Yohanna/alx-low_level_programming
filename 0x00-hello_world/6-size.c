#include<stdio.h>
/**
* main - to print the size of data types
*
* Return: Always (0)
*
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf(" Size of a char: %lu bite(s)\n", sizeof(a));
	printf("Size of an int: %lu bite(s)\n", sizeof(b));
	printf("Size of a long int: %lu bite(s)\n", sizeof(c));
	printf("Size of a long long int: %lu bite(s)\n", sizeof(d));
	printf("Size of a float: %lu bite(s)\n", sizeof(e));
	return (0);
}

