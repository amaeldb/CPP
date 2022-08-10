SRCS =	main.cpp ClapTrap.cpp

OBJS =	${SRCS:.cpp=.o}

FLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =	clapTrap

.cpp.o:
	@ c++ ${FLAGS} -c $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@ c++ ${FLAGS} ${OBJS} -o ${NAME}

clean:	${OBJS}
	@ rm -rf ${OBJS}

fclean: clean
	@ rm -rf ${NAME}

re:	fclean
	@ make all
