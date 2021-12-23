NAME		=	a.out

HEADER		=	warlock.hpp \

SRC 		= 	main.cpp \
				warlock.cpp \

OBJS		= ${SRC:.cpp=.o}

CXX			= clang++

CPPFLAGS		= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow -I.

RM			= rm -f

.PHONY: all clean re

all:		${NAME}


${OBJS}: 		${HEADER}
${NAME}:		${OBJS}
				${CXX} ${CPPFLAGS} -o ${NAME} ${OBJS} 

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}
		${RM} ${LIB}

re:		fclean all