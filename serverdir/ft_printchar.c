#include "../minitalk.h"

void	ft_printchar(siginfo_t **siginfo, char *chr)
{
	int	numb;

	numb = 0;
	while (*chr)
	{
		numb = (numb << 1) + (*chr - 48);
		chr++;
	}
	if (numb == 0)
	{
		write(1, "\n", 1);
		kill((*siginfo)->si_pid, SIGUSR2);
	}
	write(1, &numb, 1);
}
