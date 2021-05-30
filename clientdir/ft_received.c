#include "../minitalk.h"

void	ft_received(int sig)
{
	(void) sig;
	write(1, "Message received\n", 17);
	exit(0);
}
