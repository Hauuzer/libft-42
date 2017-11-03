# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rperrone <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/25 22:47:25 by rperrone          #+#    #+#              #
#    Updated: 2017/09/26 00:44:35 by rperrone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*.c

OBJS = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

all:  $(NAME)

$(NAME):	
	$(CC) $(FLAGS) -c $(SRC)	
	ar rcs $(NAME) $(OBJS)

clean:	
	rm -rf $(OBJS)

fclean: clean	
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
