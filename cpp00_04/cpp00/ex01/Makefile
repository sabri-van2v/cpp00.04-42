SRCS = 	directory.cpp PhoneBook.cpp Contact.cpp

OBJS = 	${SRCS:%.cpp=%.o}

NAME = 	directory

CC 	= 	c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = Contact.hpp PhoneBook.hpp

%.o: %.cpp ${HEADERS} Makefile
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