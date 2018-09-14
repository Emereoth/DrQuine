# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acottier <acottier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/01 13:55:41 by acottier          #+#    #+#              #
#    Updated: 2018/09/14 15:32:37 by acottier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED		=\033[0;31m
GREEN	=\033[0;32m
YELLOW	=\033[0;33m
NC		=\033[0m

TARGETS		=	Colleen \
				Grace \
				Sully

.PHONY: all clean fclen re fast

all : $(NAME)

$(NAME) :
	@make -C Colleen
	@make -C Grace
	@make -C Sully

clean :
	@make clean -C Colleen
	@make clean -C Grace
	@make clean -C Sully

fclean :
	@make fclean -C Colleen
	@make fclean -C Grace
	@make fclean -C Sully

re : fclean all
	@make re -C Colleen
	@make re -C Grace
	@make re -C Sully