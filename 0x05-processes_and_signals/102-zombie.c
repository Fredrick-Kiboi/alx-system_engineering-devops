#include <stdio.h>
#include <sys.h>
#include <unistd.h>

/**
 * 102-zombie - C function that creates 5 zombie processes
 *
 * Description:
 * For every zombie process created, it displays Zombie process created, PID: ZOMBIE_PID
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * When your code is done creating the parent process and the zombies, use the function infinite_while
 *
 * Returns: ...
 */

int infinite_while(void);

int i;
int main()
{
        for (i = 0; i < 5; i++)
        {
                pid_t child_pid;

                child_pid = fork();
                if (child_pid == 0)
                {
                        printf("Zombie process created, PID: %d\n", getpid());
                        return (0);

                }
        }
        infinite_while();
}

int infinite_while(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}