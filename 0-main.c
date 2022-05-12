#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char **n;
	n = prompt();
	/* printf("%s\n", n); */
	getargs(n);
	return (0);
}
