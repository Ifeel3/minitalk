#include "minitalk.h"

int	main(int argc, char **argv)
{
	pid_t	serverpid;

	if (argc > 3 || argc < 3 || ft_parsepid(argv[1]) == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	serverpid = ft_parsepid(argv[1]);
	kill(serverpid, SIGTSTP);
}