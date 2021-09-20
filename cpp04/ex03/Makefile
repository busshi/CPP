# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 18:20:46 by aldubar           #+#    #+#              #
#    Updated: 2021/09/20 19:04:48 by aldubar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= interface

SRCS		= main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp

HEADER		= AMateria.hpp Cure.hpp Ice.hpp Character.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp

OBJS		= $(SRCS:.cpp=.o)

FLAGS		= -Wall -Wextra -Werror -std=c++98

CC			= @clang++

RM			= @rm -f

OK			= "\r[ \033[0;32mok\033[0m ]"

%.o:%.cpp $(HEADER)
		$(CC) $(FLAGS) $< -c -o $@
			
all:		$(NAME)

$(NAME):	$(OBJS)
		@echo "[....] Compiling $(NAME)\c"
		$(CC) $(FLAGS) $(OBJS) -o $@
		@echo $(OK)

clean:
		@echo "[....] Removing $(NAME) objects\c"
		$(RM) $(OBJS)
		@echo $(OK)

fclean:		clean
		@echo "[....] Removing $(NAME)\c"
		$(RM) $(NAME)
		@echo $(OK)

re:			fclean all

.PHONY:	all clean fclean re
