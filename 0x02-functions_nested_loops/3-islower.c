#include "main.h"
/**
 * -islower.c - check if char is lowercase
 *  @c: is the char to be checked
 *  return : 1 if char is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
