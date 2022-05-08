#include "main.h"

/**
 * main - get arguments
 *
 * ac: param count
 * av: arguments array
 *
 * Return: Void
 */
void getargs(char **av)
{
	int i;

	for (i = 0; *(av + i) != 0; i++)
		printf("%s ", av[i]);
}
