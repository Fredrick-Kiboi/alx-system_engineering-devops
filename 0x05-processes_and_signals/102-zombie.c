#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int infinite_while(void);

/**
 * infinite_while - Infinite while that sleep indefinitely
 *
 * Return: void
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - C function that creates 5 zombie processes
 *
 * Description:
 * For every zombie process created, it displays Zombie process created,
 * PID: ZOMBIE_PID
 * Your code should use the Betty style. It will be checked using
 * betty-style.pl and betty-doc.pl
 * When your code is done creating the parent process and the zombies,
 * use the function infinite_while
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		pid_t child_pid;

		child_pid = fork();
		if (child_pid == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			exit(0);
		}
	}
	infinite_while();
	return (0);
}
