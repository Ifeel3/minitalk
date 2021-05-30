#include "minitalk.h"

static int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

int	ft_parsepid(char *str)
{
	char	*tmp;
	int		result;

	tmp = str;
	while (*tmp)
	{
		if (!ft_isdigit(*tmp))
			return (-1);
		tmp++;
	}
	tmp = str;
	result = 0;
	while (*tmp)
	{
		result = result * 10 + (*tmp - 48);
		tmp++;
	}
	return (result);
}
