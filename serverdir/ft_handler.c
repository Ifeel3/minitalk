#include "../minitalk.h"

void	ft_handler(int sig, siginfo_t *siginfo, void *unused)
{
	static char	*chr;

	(void) unused;
	if (!chr)
	{
		chr = malloc(sizeof(chr) * 9);
		ft_cleanchar(chr);
		chr[8] = 0;
	}
	if (sig == SIGUSR1)
		*chr = '0';
	if (sig == SIGUSR2)
		*chr = '1';
	chr++;
	if (*chr == 0)
	{
		chr -= 8;
		ft_printchar(&siginfo, chr);
		ft_cleanchar(chr);
	}
}
