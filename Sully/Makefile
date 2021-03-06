# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acottier <acottier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 10:29:31 by acottier          #+#    #+#              #
#    Updated: 2018/11/20 11:29:31 by acottier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED		=\033[0;31m
GREEN	=\033[0;32m
YELLOW	=\033[0;33m
NC		=\033[0m

NAME 		=	Sully
FLAGS 		=	-Wall -Wextra -Werror

SRC_PATH	=	sources
OBJ_PATH	=	objects

SRC_NAMES 	=	Sully.c

OBJ_NAMES 	=	$(SRC_NAMES:.c=.o)

SRC			=	$(addprefix $(SRC_PATH)/,$(SRC_NAMES))
OBJ			=	$(addprefix $(OBJ_PATH)/,$(OBJ_NAMES))

.PHONY: all clean fclean re fast

all : $(NAME)

$(NAME) : $(OBJ)
	@(time gcc $(FLAGS) $^ -o $@) 2> time.txt
	@printf "${GREEN}'Sully' executable compilation finished:${NC} "
	@printf "${YELLOW}"
	@cat time.txt | head -2 | tail -1
	@printf "${NC}"
	@rm time.txt

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH) && gcc $(FLAGS) -o $@ -c $<

clean :
	@rm -rf $(OBJ_PATH)
	@printf "${RED}'Sully' executable object files deleted.${NC}\n"

fclean : clean
	@rm -f $(NAME)
	@rm -f Sully_*
	@printf "${RED}'Sully' executable deleted.${NC}\n"

re : fclean all

fast : fclean
	gcc $(FLAGS) -c $(SRC)
	mkdir -p $(OBJ_PATH)
	mv $(OBJ_NAMES) $(OBJ_PATH)
	gcc $(FLAGS) $(OBJ) -o $(NAME)
