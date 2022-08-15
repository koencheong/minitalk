#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	sig_handler(int signo, siginfo_t *info, void *context)
{
	printf("Hello Mark\n");
}

int	main(int argc, char *argv[])
{
	struct sigaction action;

	printf("PID = %d\n", getpid());
	action.sa_flags = SA_SIGINFO;
	action.sa_sigaction = sig_handler;

	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);

	while (1)
		pause;
	return 0;
}