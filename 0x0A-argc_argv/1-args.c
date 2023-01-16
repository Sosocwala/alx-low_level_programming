#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argc parameter
 * @argv: an aray of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
