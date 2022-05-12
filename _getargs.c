#include "main.h"

/**
 * main - get arguments
 *
 * av: arguments array
 *
 * Return: Void
 */
void getargs(char **av)
{
	int i, j, ctr;
	char *line;
	char newString[40][40];

	line = (char *)av;
	j = 0;
	ctr = 0;
	for (i = 0; i <= (strlen(line)); i++)
	{
		// if space or NULL is found, assign NULL into newString[ctr]
		if (line[i] == ' ' || line[i] == '\0')
		{
			newString[ctr][j] = '\0';
			ctr++;
			j = 0;
		}
		else
		{
			newString[ctr][j] = line[i];
			j++;
		}
	}
	for(i = 1; i < ctr; i++)
		printf("%s ", newString[i]);	
}
