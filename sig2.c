#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	pid;

	pid = atoi(argv[1]);
	kill(pid, SIGUSR1);
}