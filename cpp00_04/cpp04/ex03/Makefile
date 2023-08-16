SRCS = 	main.cpp AMateria.cpp Ice.cpp Cure.cpp \
		Character.cpp MateriaSource.cpp

OBJS = 	${SRCS:%.cpp=%.o}

NAME =	Materia

CC 	= 	c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS =	AMateria.hpp Ice.hpp Cure.hpp \
			Character.hpp ICharacter.hpp \
			MateriaSource.hpp IMateriaSource.hpp

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