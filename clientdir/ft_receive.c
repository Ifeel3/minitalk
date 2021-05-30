#include "../minitalk.h"

void	ft_receive(pid_t pid, char *word)
{
	int	i;

	while (*word)
	{
		if (*word == '0')
			kill(pid, SIGUSR1);
		if (*word == '1')
			kill(pid, SIGUSR2);
		word++;
		usleep(12);
	}
	i = 0;
	while (i < 8)
	{
		kill(pid, SIGUSR1);
		i++;
		usleep(12);
	}
}
