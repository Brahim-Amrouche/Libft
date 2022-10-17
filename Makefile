SRCS = ft_atoi.c   ft_isalpha.c      ft_itoa.c        ft_memcpy.c       ft_putendl_fd.c   ft_strchr.c       ft_strlcat.c      ft_strncmp.c      ft_substr.c ft_bzero.c   ft_isascii.c  ft_memmove.c  ft_putnbr_fd.c   ft_strdup.c       ft_strlcpy.c      ft_strnstr.c      ft_tolower.c    ft_calloc.c  ft_isdigit.c      ft_memchr.c       ft_memset.c       ft_putstr_fd.c    ft_striteri.c     ft_strlen.c       ft_strrchr.c      ft_toupper.c ft_isalnum.c   ft_isprint.c         ft_memcmp.c       ft_putchar_fd.c   ft_split.c        ft_strjoin.c      ft_strmapi.c      ft_strtrim.c

BONUS = $(wildcard ft_lst*.c)

HEADERS	=	-Ilibft.h

FLAGS = -Wall -Wextra -Werror $(HEADERS)

CC = cc

OBJS = $(patsubst %.c,%.o,$(SRCS))

BONUS_OBJS = $(patsubst %.c,%.o,$(BONUS))

NAME 	=	libft.a

RM = rm -f


%.o:%.c
	$(CC) $(FLAGS) -c -o $@ $^

all :	$(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ ${OBJS}

clean :
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

bonus : $(NAME) $(BONUS_OBJS)
	ar -rcs $(NAME) $(BONUS_OBJS) 

.PHONY : all clean fclean re