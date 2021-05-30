#include "../minitalk.h"

//static void convertdec(char *chr)
//{
//
//}

int	main(void)
{
	struct sigaction	catch;

	catch.sa_flags = SA_SIGINFO;
	catch.sa_sigaction = ft_handler;
	ft_printpid();
	sigaction(SIGUSR1, &catch, 0);
	sigaction(SIGUSR2, &catch, 0);
	while (1)
		pause();
}
