# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 21:26:00 by mboyansa          #+#    #+#              #
#    Updated: 2022/10/25 21:26:04 by mboyansa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

NAME	= libft.a

SRCS	= ft_isascii.c ft_isalpha.c  \
		  ft_memchr.c ft_strdup.c \
		  ft_calloc.c ft_strchr.c ft_strrchr.c \
		  ft_tolower.c ft_toupper.c ft_memset.c \
		  ft_bzero.c ft_isprint.c ft_strlen.c ft_strncmp.c\
		  ft_memcmp.c ft_atoi.c ft_substr.c\
		  ft_isdigit.c ft_isalnum.c ft_memcpy.c ft_strlcpy.c \
		  ft_strlcat.c ft_memmove.c ft_strnstr.c ft_putstr_fd.c ft_putendl_fd.c\
		  ft_striteri.c ft_strtrim.c ft_strjoin.c ft_strmapi.c ft_split.c \
		  ft_itoa.c ft_putnbr_fd.c ft_putchar_fd.c\

OBJS	= $(SRCS:.c=.o)

BONUS_S = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
		  ft_lstdelone.c ft_lstclear.c ft_lstiter.c\

BONUS_O	= $(BONUS_S:.c=.o)
 

all:		$(NAME)

$(NAME):	$(OBJS)
					ar rcs $(NAME) $(OBJS)


clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
					$(RM) $(NAME)

re:			fclean all

bonus: 		$(OBJS) $(BONUS_O)
					ar rcs $(NAME) $(OBJS) $(BONUS_O)
.PHONY:		all clean fclean re bonus
