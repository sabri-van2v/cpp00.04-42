SRCS = 	main.cpp Harl.cpp

OBJS = 	${SRCS:%.cpp=%.o}

NAME =	HarlFilter

CC 	= 	c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = Harl.hpp

%.o: %.cpp ${HEADERS}
	${CC} ${CFLAGS} -c $< -o $@ -I.

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	 rm -rf ${OBJS}

fclean: clean
	 ${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re