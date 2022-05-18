#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	
	printf("Before execve\n");
	/* printf("%s %s %s %s\n", argv[0],argv[1],argv[2],argv[3]); */
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error");
	}
	printf("After execve\n");
	return (0);
}
