# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmasha-h <fmasha-h@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 14:46:20 by fmasha-h          #+#    #+#              #
#    Updated: 2018/12/27 22:53:19 by fmasha-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEAD = *.h

SRC = ft_*.c

RES =  ft_*.o

GCCKEYS = -Wall -Wextra -Werror

$(NAME):
	gcc $(GCCKEYS) -c $(SRC) -I $(HEAD)
	ar rc $(NAME) $(RES)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(RES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
