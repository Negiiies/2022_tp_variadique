# E89 Pedagogical & Technical Lab
# project:     2022_variadique
# created on:  2022-12-09 - 09:58 +0100
# 1st author:  dylan.le - dylan.le
# description: Building the project

NAME	=	var

SRCS	=	src/stu_strlen.c	\
		src/mini_printf.c	\
		src/mini_printf.test.c	\
		src/get_digit.c		\
		src/nb_len.c		\
		src/print_base10.c


OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -IInclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
