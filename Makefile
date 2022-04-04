# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttshung- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 11:49:39 by ttshung-          #+#    #+#              #
#    Updated: 2022/04/04 11:49:44 by ttshung-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= 	libft.a
CC 			= 	gcc
FLAGS 		= 	-Wall -Wextra -Werror
LIB			= 	ar rc
FILES		= 	ft_isalpha.c \\

all: 		$(NAME)

$(NAME):	$(CC) $(FLAGS) $(FILES)

clean:		