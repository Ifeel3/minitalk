#include "../minitalk.h"

int	main(int argc, char **argv)
{
	pid_t	serverpid;
	char	*word;

	if (argc > 3 || argc < 2 || ft_parsepid(argv[1]) == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	signal(SIGUSR2, ft_received);
	serverpid = ft_parsepid(argv[1]);
	if (argc < 3 || argc > 3)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	word = ft_convertbin(argv[2]);
	ft_receive(serverpid, word);
	while (1)
		pause();
}
