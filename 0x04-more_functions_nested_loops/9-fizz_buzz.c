#include "main.h"
#include <stdio.h>
/**
 * main - fizz-buzz test
 *
 * Return: 0 on succes
 */

int main(void)
{
	int start = 1, end = 100;

	while (start <= 100)
	{
		if (start % 3 == 0)
			printf("Fizz");
		if (start % 5 == 0)
			printf("Buzz");
		if (start % 3 != 0 && start % 5 != 0)
			printf("%d", start);
		putchar(start == end ? '\n' : ' ');
	}
	return (0);
}
