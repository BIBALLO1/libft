SRC = ft_printf.c\
	  print_args/print_str.c\
	  print_args/print_char.c\
	  print_args/print_num.c\
	  print_args/print_hex.c\

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = ./libft
LIBFTLIB = libft.a

NAME = libftprintf.a

all: $(NAME)

makelib:
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFTLIB) .
	mv $(LIBFTLIB) $(NAME)

$(NAME): makelib $(OBJ)
	ar -r $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -I$(LIBFTDIR) -c -o $@ $<

clean:
	make clean -C $(LIBFTDIR)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(LIBFTDIR)
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re makelib
