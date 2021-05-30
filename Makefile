NAME	= minitalk
APPS	= server
SRCS	= $(wildcard serverdir/*.c)
OBJS	= $(SRCS:%.c=%.o)
APPC	= client
SRCC	= $(wildcard clientdir/*.c)
OBJC	= $(SRCC:%.c=%.o)
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

.PHONY: all clean fclean re $(NAME) $(APP1) $(APP2) norm

all: $(NAME)

$(NAME): $(APPS) $(APPC)

$(APPS): $(OBJS)
ifndef ($?)
		$(CC) $(OBJS) -o $@
endif

$(APPC): $(OBJC)
ifndef ($?)
		$(CC) $(OBJC) -o $@
endif

clean:
	rm -f $(OBJS) $(OBJC)

fclean: clean
	rm -f server client

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader $(SRCS)
	norminette -R CheckForbiddenSourceHeader $(SRCC)
	norminette minitalk.h