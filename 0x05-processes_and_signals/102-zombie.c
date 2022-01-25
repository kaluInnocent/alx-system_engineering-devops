#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* infinite_while - function delays the process
* Return: 0
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
* main - function creates a zombie process
* Return: returns the process status
*/
int main(void)
{
	pid_t zombie_PID;
	unsigned int i;

	for (i = 0; i < 5; i++)
	{
		zombie_PID = fork();
		if (zombie_PID == 0)
			exit(0);
		else
			printf("Zombie process created, PID: %d\n", zombie_PID);
	}
	return (infinite_while());
}
