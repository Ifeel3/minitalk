NAME	= minitalk

APPS	= server

APPC	= client

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

SRCS	= server.c \
		ft_putnbr.c \
		ft_printpid.c

SRCC	= client.c \
		ft_putnbr.c \
		ft_parsepid.c

OBJS = $(SRCS:%.c=%.o)

OBJC = $(SRCC:%.c=%.o)

all: $(NAME)

$(APPS): $(OBJS)
ifndef ($?)
		$(CC) $(OBJS) -o $@
endif

$(APPC): $(OBJC)
ifndef ($?)
		$(CC) $(OBJC) -o $@
endif

$(NAME): $(APPS) $(APPC)

clean:
	rm -f $(OBJS) $(OBJC)

fclean: clean
	rm -f server client

re: fclean all

.PHONY: all clean fclean re $(NAME) $(APP1) $(APP2)