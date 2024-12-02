SRC = ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memset.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_strlen.c\
	ft_strnstr.c\
	ft_strchr.c\
	ft_strncmp.c\
	ft_strrchr.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_putunbr_fd.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_strjoin.c\
	ft_substr.c\
	ft_strtrim.c\
	ft_itoa.c\
	ft_atoi.c\
	ft_striteri.c\
	ft_strmapi.c\
	ft_split.c\
	ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstlast.c\
	ft_lstsize.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstmap.c\
	\
	ft_printf/print_args/print_char.c\
	ft_printf/print_args/print_hex.c\
	ft_printf/print_args/print_num.c\
	ft_printf/print_args/print_str.c\
	ft_printf/ft_printf.c\

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
