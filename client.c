#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

// client

void	sig_handler2(int sig)
{
	(void)sig;
	write(1, "Received\n", 10);
	exit(0);
}

int	main(int argc, char *argv[])
{
	int		bit;
	int		byte;
	int		pid;
	char	*message;

	signal(SIGUSR2, sig_handler2);
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
			usleep(30);
			bit--;
            if ((message[byte] >> bit) & 1)
				kill(pid, SIGUSR1);
            else
                kill(pid, SIGUSR2);
        }
		byte++;
    }
}
