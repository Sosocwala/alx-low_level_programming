#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argc parameter
 * @argv: an aray of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
	return (0);
}
