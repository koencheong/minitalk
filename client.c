#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

// client

void	sig_handler2(int signo, siginfo_t *info, void *context)
{
	write(1, "1\n", 1);
	if (signo == SIGUSR2)
		write (1, "hi\n", 3);
}

int	main(int argc, char *argv[])
{
	int		bit;
	int		byte;
	int		pid;
	char	*message;
	struct	sigaction action;

	if (argc != 3)
	{
		printf("ERROR: Invalid arguments passed!\n");
		printf("Please execute the program as follow: [./client] [pid] [message]\n");
		exit(EXIT_FAILURE);
	}
	
	byte = 0;
	pid = atoi(argv[1]);
	message = argv[2];
    
    while (message[byte])
    {
        bit = 8;
        while (bit > 0)
        {
			usleep(500);
            if ((message[byte] >> --bit) & 1)
				kill(pid, SIGUSR1);
            else
                kill(pid, SIGUSR2);
        }
        byte++;
    }

	action.sa_flags = SA_RESTART | SA_SIGINFO;
	action.sa_sigaction = sig_handler2;

	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
}
