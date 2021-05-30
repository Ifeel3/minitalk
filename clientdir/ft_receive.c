#include "../minitalk.h"

void	ft_receive(pid_t pid, char *word)
{
	while (*word)
	{
		if (*word == '0')
			kill(pid, SIGUSR1);
		if (*word == '1')
			kill(pid, SIGUSR2);
		word++;
		usleep(9);
	}
}
