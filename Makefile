# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchergui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 19:34:00 by mchergui          #+#    #+#              #
#    Updated: 2019/10/19 19:36:16 by mchergui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = *.c

OUT = *.o

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OUT)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

bonus:
	echo "Hello"
