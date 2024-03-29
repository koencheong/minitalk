/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:12:10 by kcheong           #+#    #+#             */
/*   Updated: 2023/04/12 18:12:10 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	bit_transfer(char *message, int pid)
{
	int	byte;
	int	bit;

	byte = 0;
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

int	main(int argc, char *argv[])
{
	int		pid;
	char	*message;

	signal(SIGUSR2, sig_handler2);
	if (argc != 3)
	{
		ft_printf("ERROR: Invalid arguments passed!\n");
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
	bit_transfer(message, pid);
}
