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


CC 			= 	gcc
FLAGS 		= 	-Wall -Wextra -Werror -c
AR			= 	ar rc
NAME		= 	libft.a
FILES		= 	ft_isalpha.c
OBJS		=	${FILES:.c=.o}

all:		${NAME}

${NAME}:
			${CC} ${FLAGS} ${FILES}
			${AR} ${NAME} ${OBJS}
			ranlib ${NAME}
			printf "Done\\n"

clean:
			rm ${OBJS}
			printf "Objects cleaned!\\n"

fclean:		clean
			rm ${NAME}
			printf "Library cleaned!\\n"

re:			fclean all

.PHONY:		all clean fclean re