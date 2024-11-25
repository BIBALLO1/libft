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
	ft_split.c

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew_bonus.c\
	ft_lstadd_front_bonus.c\
	ft_lstlast_bonus.c\
	ft_lstsize_bonus.c\
	ft_lstadd_back_bonus.c\
	ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c\
	ft_lstiter_bonus.c\
	ft_lstmap_bonus.c

BONUS_OBJ = $(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
BONUS_CACHE = bonus.cache

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -c -o $@ $<

bonus: $(BONUS_CACHE)

$(BONUS_CACHE): $(BONUS_OBJ) $(OBJ)
	ar -rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	touch $(BONUS_CACHE)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)
	rm -f $(BONUS_CACHE)

fclean: clean
	rm -f $(NAME)
	rm -f $(BONUS_CACHE)

re: fclean all

.PHONY:	all clean fclean re bonus
