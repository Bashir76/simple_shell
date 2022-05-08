#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - PID
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t my_pid;
	if ((fork()) < 0)
	{
		printf ("Process id is not obtained. \n");
		exit (1);
	}
	else
	{
		my_pid = getpid();
		printf("Process id is: %u\n", my_pid);
		printf("Process id is greater than 0: It is obtained. \n");
		sleep(1);
		exit(0);
	}
	return (0);
}
