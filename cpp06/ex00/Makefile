# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldubar <aldubar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 18:20:46 by aldubar           #+#    #+#              #
#    Updated: 2021/09/24 21:47:34 by aldubar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= convert

SRCS		= main.cpp ScalarConversion.cpp printConvert.cpp

HEADER		= ScalarConversion.hpp printConvert.hpp

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
