SRCS =	main.cpp

OBJS =	${SRCS:.cpp=.o}

FLAGS =	-Wall -Wextra -Werror -std=c++98

NAME =	replace

.cpp.o:
	@ c++ ${FLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
	@ c++ ${FLAGS} ${OBJS} -o ${NAME}

clean:	${OBJS}
	@ rm -rf ${OBJS}

fclean: clean
	@ rm -rf ${NAME}

re:	fclean
	@ make all

test: all
	@ echo "Test 1: insufficient parameters\n\n"
	./replace test1
	@ echo "\n\nTest 2: non-existant file\n\n"
	./replace test2 hello goodbye
	@ echo "\n\nTest 3: valid execution\n"
	./replace test3 hello goodbye
	@ echo "\ntest3 :\n"
	@ cat test3
	@ echo "\ntest3.replace:\n"
	@ cat test3.replace
