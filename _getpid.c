#include "main.h"

/**
 * _getpid - PID
 *
 * Return: Always 0
 */
int _getpid()
{
	pid_t my_pid = getpid();
	/* pid_t my_ppid = getppid(); */

	printf("PID: %u\n", my_pid);
	/* printf("PPID: %d\n", my_ppid); */
	return (0);
}
