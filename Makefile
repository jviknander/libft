CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

NAME	= libft.a
INCLUDE	= libft.h

SRCS	=	ft_memcpy.c	\
			ft_memmove.c \
			ft_bzero.c \
			ft_memset.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strncmp.c \
			ft_strchr.c \
			ft_strrchr.c \
		   	ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_strlcat.c \
			ft_memchr.c \
			ft_strlcpy.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			#$(wildcard *.c)


OBJS	= $(SRCS:.c=.o)

BONUS_S	= $(wildcard ft_lst*.c)

BONUS_0	= $(BONUS_S:.c=.o)

all:		$(NAME)
	
$(NAME):	$(OBJS) $(INCLUDE)
			echo $(OBJS) 
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
				
