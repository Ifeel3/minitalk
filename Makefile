NAME	= minitalk

APPS	= server

APPC	= client

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

SRCS	= $(wildcard serverdir/*.c) \
		ft_parsepid.c

SRCC	= $(wildcard clientdir/*.c) \
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

norm:
	norminette -R CheckForbiddenSourceHeader $(SRCS)
	norminette -R CheckForbiddenSourceHeader $(SRCC)
	norminette minitalk.h

.PHONY: all clean fclean re $(NAME) $(APP1) $(APP2) norm