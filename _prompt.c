#include "main.h"

/**
 * prompt - get line
 *
 * Return: Always 0
 */
char **prompt()
{
	unsigned int i, c;
	char *line;
	char *buf;
	int count = 0;

	printf("$ ");

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (NULL);

	for (count = 0; ; count++)
	{
		c = fgetc(stdin);
		*(buf + count) = c;
		if (c == '\n')
			break;
	}
	*(buf + count) = '\0';
	*(buf + (count + 1)) = '\n';

	line = malloc(sizeof(char) * count);
	if (line == NULL)
		return (NULL);

	for (i = 0; *(buf + i) != '\n'; i++)
	{
		if (*(buf + i) == ' ')
		{
			*(line + i) = '\0';
			continue;
		}
		*(line + i) = *(buf + i);
	}
	*(line + i) = '\0';
	*(line + (i + 1)) = '\n';
	/* line = strtok(line, " "); */
	free (buf);
	

	/* printf ("%s\n", line); */
	return ((char **)line);
}
