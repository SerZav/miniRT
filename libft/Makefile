SRCS	= ft_atoi.c ft_calloc.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_substr.c ft_strncmp.c ft_strrchr.c ft_strdup.c ft_memccpy.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strchr.c ft_isalnum.c ft_strtrim.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strmapi.c ft_bzero.c ft_memchr.c ft_strnstr.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

SRCS_B	= ft_lstnew_bonus.c ft_lstdelone_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstclear_bonus.c

OBJS_B	= ${SRCS_B:.c=.o}

CC	= cc

AR	= ar rc

RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}
	${RM} ${OBJS_B}

fclean:	clean
	${RM} ${NAME}
	${RM} ${NAME_B}

re:	fclean all

so:
	gcc *.o -shared -o libft.so

bonus: ${OBJS_B}
	ar rcs ${NAME} ${OBJS_B}

.PHONY: all clean fclean re