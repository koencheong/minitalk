#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

// client

int	main(int argc, char **argv)
{
	int	pid;
	char	*message;

	if (argc != 3)
	{
		printf("ERROR: Invalid arguments passed!\n");
		printf("Please execute the program as follow: [./client] [pid] [message]\n");
		exit(EXIT_FAILURE);
	}
	pid = atoi(argv[1]);
	message = argv[2];
	kill(pid, SIGUSR1);
}