# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acottier <acottier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/01 13:55:41 by acottier          #+#    #+#              #
#    Updated: 2018/09/04 10:25:18 by acottier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED		=\033[0;31m
GREEN	=\033[0;32m
YELLOW	=\033[0;33m
NC		=\033[0m

TARGETS		=	Collen \
				Grace \
				Sully

.PHONY: all clean fclen re fast

all : $(NAME)

$(NAME) :
	@make -C $(TARGETS)

clean :
	@make clean -C $(TARGETS)

fclean :
	@make fclean -C $(TARGETS)

re : fclean all
	@make re -C $(TARGETS)