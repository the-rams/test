LIB		=	libmy_printf_
LIB_STC	=	$(LIB)$(shell uname -m)-$(shell uname -s).a
LIB_DYN	=	$(LIB)$(shell uname -m)-$(shell uname -s).so

SRCS	=	my_printf.c		\
			my_put_hexa.c 	\
			my_put_oct.c	\
			my_putchar.c	\
			my_putnbr.c		\
			my_putstr.c		\
			put_unsigned.c
OBJ		=	$(SRCS:.c=.o)
HEADER	=	my_lib.h

FLAGS	=	-Wall -Wextra -Werror -fPIC
CC		=	gcc
RM		= 	rm -rf
all:		$(LIB_STC) $(LIB_DYN)

my_printf_static: $(LIB_STC)

$(LIB_STC):	$(OBJ) $(HEADER)
			ar rc $(LIB_STC) $(OBJ)
			ranlib $(LIB_STC)

my_printf_dynamic: $(LIB_DYN)

$(LIB_DYN):	$(OBJ) $(HEADER)
			$(CC) -shared $(OBJ) -o $(LIB_DYN)


clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(LIB_STC)
			@$(RM) $(LIB_DYN)

re:			fclean	all

.PHONY:		clean fclean re all $(LIB_STC) $(LIB_DYN)

