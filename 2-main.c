#include "main.h"

int main(void)
{
	printf("Main program started\n");
	char* argv[] = { "jim", "jams", NULL };
	char* envp[] = { "some", "environment", NULL };
	if (execve("./sub", argv, envp) == -1)
	{
		perror("Could not execve");
	}
	return (1);
}