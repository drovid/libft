NAME = libft.a
INCLUDES = includes
CFLAGS = -Wall -Wextra -Werror -I $(INCLUDES)

FILES = 	ft_atoi \
			ft_bzero \
			ft_countwords \
			ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint \
			ft_itoa \
			ft_islower \
			ft_isupper \
			ft_memalloc \
			ft_memccpy \
			ft_memchr \
			ft_memcmp \
			ft_memcpy \
			ft_memdel \
			ft_memmove \
			ft_memrealloc \
			ft_memset \
			ft_putchar \
			ft_putchar_fd \
			ft_putendl \
			ft_putendl_fd \
			ft_putnbr \
			ft_putnbr_fd \
			ft_putstr \
			ft_putstr_fd \
			ft_strcat \
			ft_strchr \
			ft_strclr \
			ft_strcmp \
			ft_strcpy \
			ft_strdel \
			ft_strdup \
			ft_strequ \
			ft_striter \
			ft_striteri \
			ft_strjoin \
			ft_strlcat \
			ft_strlen \
			ft_strmap \
			ft_strmapi \
			ft_strncat \
			ft_strncpy \
			ft_strnequ \
			ft_strnew \
			ft_strncmp \
			ft_strnstr \
			ft_strrchr \
			ft_strsplit \
			ft_strstr \
			ft_strsub \
			ft_strtolower \
			ft_strtoupper \
			ft_strtrim \
			ft_tolower \
			ft_toupper \
			ft_update

SRC = $(addsuffix .c, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

all: $(NAME)

%.o: %.c
	@gcc -c $(CFLAGS) $^ -o $@

$(NAME): $(OBJ)
	@ar -rcs $@ $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f a.out

re: fclean all									
