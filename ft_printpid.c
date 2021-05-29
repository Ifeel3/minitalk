#include "minitalk.h"

void	ft_printpid(void)
{
	pid_t	pid;

	pid = getpid();
	write(1, "PID: ", 5);
	ft_putnbr(pid);
	write(1, "\n", 1);
}
