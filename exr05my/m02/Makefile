NAME		=	a.out

HEADER		=	warlock.hpp \
				aspell.hpp \
				atarget.hpp \
				fwoosh.hpp \
				dummy.hpp \
				brickwall.hpp \
				fireball.hpp \
				polymorph.hpp \
				spellbook.hpp \
				targetgenerator.hpp \

SRC 		= 	main.cpp \
				warlock.cpp \
				aspell.cpp \
				atarget.cpp \
				fwoosh.cpp \
				dummy.cpp \
				brickwall.cpp \
				fireball.cpp \
				polymorph.cpp \
				spellbook.cpp \
				targetgenerator.cpp \

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