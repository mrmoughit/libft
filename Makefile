NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_tolower.c\
		ft_toupper.c    \
		ft_atoi.c \
		ft_memset.c     \
		ft_bzero.c       \
		ft_strdup.c \
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_strlen.c     \
		ft_isalpha.c    \
		ft_isdigit.c    \
		ft_isalnum.c    \
		ft_isascii.c    \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memcpy.c \
		ft_strlcat.c \
		ft_strlcpy.c    \
		ft_isprint.c    \
		ft_calloc.c     \
		ft_substr.c\
		ft_memchr.c     \
		ft_strjoin.c \
		ft_strtrim.c    \
		ft_memcmp.c\
		ft_memmove.c\
		ft_strmapi.c \
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_itoa.c \
		ft_split.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_striteri.c

BNS =	ft_lstnew_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\

OBJECTS1 = $(SRC:.c=.o)
OBJECTS2 = $(BNS:.c=.o)

INCLUDES = libft.h

all: $(NAME)

$(NAME): $(OBJECTS1)
	ar rc $(NAME) $^

  %.o : %.c $(INCLUDES)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS1) $(OBJECTS2)

fclean: clean
	rm -rf $(NAME)

re: fclean all


bonus: $(OBJECTS2) $(INCLUDES)
	ar rc $(NAME) $^
