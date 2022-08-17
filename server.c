#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// server

void	receiver(int signo, siginfo_t *info, void *context)
{
	char	c;
	// int		client_pid;

	// client_pid = info->si_pid;
	if (signo == SIGUSR1)
		write(1, "1", 1);
	if (signo == SIGUSR2)
		write(1, "0", 1);
	// kill(client_pid, SIGUSR2);
}

int	main()
{
	struct sigaction action;

	printf("PID = %d\n", getpid());
	action.sa_sigaction = receiver;
	action.sa_flags = SA_RESTART;

	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);

	// signal(SIGUSR1, sig_handler1);
	// signal(SIGUSR2, sig_handler1);

	while (1)
		pause();
	return 0;
}