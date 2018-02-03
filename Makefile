##Press Ctrl+H then enter this file name and press enter

XX		=	g++

RM		=	rm -f

CXXFLAGS	=	-W -Wall -Wextra -Werror -Wshadow -Wunreachable-code -Wconversion
CXXFLAGS	+=	-Wswitch-default -Wswitch-enum
CXXFLAGS	+=	-Wuninitialized -Winit-self
CXXFLAGS	+=	-fstack-protector-strong
CXXFLAGS	+=	-pedantic -Weffc++ -std=c++17
CXXFLAGS	+=	-march=native
CPPFLAGS	=	-I include

UTIL_DIR	=	util
UTIL_SRC	=	\

SRC_DIR		=	src
SRC_FILES	=	$(addprefix $(UTIL_DIR)/, $(UTIL_SRC))	\
			main.cpp				\

SRCS		=	$(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJS		=	$(SRCS:.cpp=.o)

BIN_DIR		=	bin
BIN_NAME	=	name_generator
NAME		=	$(addprefix $(BIN_DIR)/, $(BIN_NAME))

all:		$(NAME)

$(NAME):	$(OBJS)
		$(XX) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
