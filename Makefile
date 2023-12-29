NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar -rc

SRC = ft_atoi.c	ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
ft_strdup.c  ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
ft_tolower.c ft_toupper.c  \

B_SRC = ft_lstnew.c \

OBJ = $(SRC:%.c=%.o)

B_OBJ = $(B_SRC:%.c=%.o)

$(NAME):
	@$(CC) $(FLAGS) -c $(SRC)
	@$(AR) $(NAME) $(OBJ)
all: $(NAME)

bonus:
	@$(CC) $(FLAGS) -c $(B_SRC)
	@$(AR) $(NAME) $(B_OBJ)

c: clean
clean: 
	@$(RM) $(OBJ) 

f: fclean
fc: fclean
fclean: 
	@$(RM) $(OBJ) $(NAME) a.out

re: fclean $(NAME)

.PHONY: all bonus clean fclean re