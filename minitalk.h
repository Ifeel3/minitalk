#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

void	ft_received(int sig);
void	ft_receive(pid_t pid, char *word);
void	ft_putnbr(int number);
void	ft_printpid(void);
int		ft_parsepid(char *str);
void	ft_cleanchar(char *chr);
void	ft_handler(int sig, siginfo_t *siginfo, void *unused);
char	*ft_convertbin(char *string);
size_t	ft_strlen(const char *s);
#endif