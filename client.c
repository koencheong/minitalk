#include <signal.h>
#include <stdlib.h>
#include "libft/libft.h"

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
		ft_printf("ERROR: Invalid arguments passed!\n");
		ft_printf("Please execute the program as follow: [./client] [pid] [message]\n");
		exit(EXIT_FAILURE);
	}
	
	byte = 0;
	pid = ft_atoi(argv[1]);
	message = argv[2];
    
    while (byte <= (int)(ft_strlen(message)))
    {
        bit = 8;
        while (bit > 0)
        {
			usleep(150);
			if ((message[byte] >> --bit) & 1)
				kill(pid, SIGUSR1);
            else
				kill(pid, SIGUSR2);
			usleep(150);
		}
		byte++;
    }
}
