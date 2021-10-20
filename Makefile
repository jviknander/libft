CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

NAME	= libft.a
INCLUDE	= libft.h

SRCS	= *.c

OBJS	= $(SRCS:.c=.o)

BONUS_S	= $(wildcard ft_lst*.c)

BONUS_0	= $(BONUS_S:.c=.o)

all:		$(NAME)
	
$(NAME):	$(OBJS) $(INCLUDE)
			ar -rcs $(NAME) $(OBJS)
			ranlib	$(NAME)

bonus:		$(NAME) $(BONUS_0)
			ar -rcs $(NAME) $(BONUS_0)

.c.o:
			$(CC) $(FLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_0)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
				
