NAME = Game

SRC		=	${shell find . -name "*.cpp"}
HDR		=	${shell find . -name "*.hpp"}

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98

all : ${NAME}

${NAME} : ${SRC}
	@${CC} ${CFLAGS} -o ${NAME} ${SRC}
	@echo "\033[31m	   ༺ (\033[31m\033[32mGame Compiled!\033[31m)༻\033[39m\n"

clean :
	@echo "\033[33m     Clean  ALL ..."
	@rm -f ${NAME}
	
fclean : clean
	@rm -f	${NAME}
	@echo "\033[36mEverything is cleaned! \033[32m✓\033[39m\n"

re: fclean all

.PHONY:all clean fclean re