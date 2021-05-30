#include "../minitalk.h"

void	ft_putnbr(int number)
{
	if (number > 9)
		ft_putnbr(number / 10);
	number = (number % 10) + 48;
	write(1, &number, 1);
}
