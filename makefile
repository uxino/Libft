NAME	= libft
SRC	= ft_strlen.c \
		  ft_strchr.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_atoi.c \
		  ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strdup.c \
		  ft_strnstr.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_itoa.c

INC		= libft.h
OBJ	= $(SRC:.c=.o)

B_OBJ	= $(BONUS:.c=.o)
CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror
%.o:%.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@
all:			$(NAME)
$(NAME):		$(OBJ)
					ar -rcs $(NAME).a $(OBJ)
clean:
				$(RM) $(OBJ) $(B_OBJ)
fclean:			clean
					$(RM) $(NAME).a
re:				fclean all
bonus:			$(OBJ)	$(B_OBJ)
					ar -rcs $(NAME).a $(OBJ) $(B_OBJ)
.PHONY:			all, clean, fclean, re