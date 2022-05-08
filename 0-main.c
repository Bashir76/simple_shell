#include "main.h"

/**
 * main - PID
 *
 * Return: Always 0
 */
int main(void)
{
	char **n;
	n = prompt();
	printf("%s", n);
	getargs(n);
	return (0);
}
