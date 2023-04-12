#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

// server
// SIGUSR1 == 1
// SIGUSR2 == 0

void receiver(int signo, siginfo_t *info, void *context)
{
	static char		c;
	static int		bit;
	static int		client_pid;	

	(void)context;
	client_pid = info->si_pid;
	bit++;
	if (signo == SIGUSR1)
		c += 1;
	if (bit == 8)
	{
		write(1, &c, 1);
		if (c == '\0')
		{
			write(1, "\n", 1);
			kill(client_pid, SIGUSR2);
		}
		bit = 0;
		c = 0;
	}
	else
		c <<= 1;
}

int	main()
{
	struct sigaction action;

	ft_printf("SERVER PID = %d\n", getpid());
	action.sa_sigaction = receiver;
	action.sa_flags = SA_RESTART | SA_SIGINFO;

	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);

	while (1);
	return 0;
}