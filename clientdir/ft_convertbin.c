#include "../minitalk.h"

char	*ft_convertbin(char *string)
{
	char	*result;
	char	*tmp;
	int		i;

	result = (char *)malloc(sizeof(char) * ((ft_strlen(string) * 8) + 1));
	tmp = result;
	while (*string)
	{
		i = 0;
		*tmp = '0';
		tmp++;
		while (i < 7)
		{
			*tmp = (char)(((*string & 0x7f) >> 6) + 48);
			*string = (char)((int)(*string) << 1);
			tmp++;
			i++;
		}
		string++;
	}
	*tmp = 0;
	return (result);
}
