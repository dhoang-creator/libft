#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dhoang <marvin@codam.nl>                     +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/31 09:33:13 by dhoang        #+#    #+#                  #
#    Updated: 2019/11/28 18:07:24 by dhoang        ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC	=	ft_strlen.c		ft_toupper.c	ft_tolower.c	\
		ft_isprint.c	ft_isascii.c	ft_isalnum.c	\
		ft_isdigit.c	ft_isalpha.c	ft_atoi.c		\
		ft_memcpy.c		ft_memset.c		ft_bzero.c		\
		ft_strlcpy.c	ft_strrchr.c	ft_strlcat.c	\
		ft_memccpy.c	ft_memcmp.c		ft_memmove.c	\
		ft_memchr.c		ft_strchr.c		ft_strnstr.c	\
		ft_strncmp.c	ft_calloc.c		ft_strdup.c		\
		ft_substr.c		ft_strjoin.c	ft_strtrim.c	\
		ft_putchar_fd.c	ft_putstr_fd.c	ft_split.c		\
		ft_itoa.c		ft_putnbr_fd.c	ft_strmapi.c	\
		ft_putendl_fd.c

BON =	ft_lstnew_bonus.c		ft_lstadd_front_bonus.c		\
		ft_lstsize_bonus.c		ft_lstlast_bonus.c			\
		ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c		\
		ft_lstclear_bonus.c		ft_lstiter_bonus.c			\
		ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

BOB = $(BON:.c=.o)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

bonus:
	gcc -c -Wall -Werror -Wextra $(BON)
	ar rc $(NAME) $(BOB)

clean:
	rm -f $(OBJ) $(BOB)

fclean: clean
	rm -f $(NAME)

re: fclean all
