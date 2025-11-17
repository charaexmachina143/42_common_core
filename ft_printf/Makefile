NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra #-g -c

SRC = ft_printf.c ft_puthex.c ft_putnbr_unsigned_fd.c ft_puthex_upper.c ft_putptr.c

HEADER = ft_printf.h

OBJECTS = $(SRC:.c=.o)

RM = rm -rf

LIBFT_P = libft

CREATION = ar -rc

all: $(NAME)

$(NAME): $(LIBFT_P) $(OBJECTS) 
	@make -C $(LIBFT_P)
	@cp $(LIBFT_P)/libft.a $(NAME) 
	$(CREATION) $(NAME) $(LIBFT_P)/libft.a $(OBJECTS) 

clean: 
	$(RM) $(OBJECTS)
	@make -C $(LIBFT_P) clean

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT_P) fclean

re: fclean all

.PHONY: all clean fclean re