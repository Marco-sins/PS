SRCS			=   
OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -fr
CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap

LIBFT_DIR = Libft
FT_PRINTF_DIR = ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF =  $(FT_PRINTF_DIR)/ft_printf.a

LIBS = $(LIBFT) $(FT_PRINTF)

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBS)
				ar rcs $(NAME) $(OBJS) $(LIBS)

$(LIBFT):
				@make -C $(LIBFT_DIR)

$(FT_PRINTF)
				@make -C $(FT_PRINTF_DIR)

clean:
				$(RM) $(OBJS)
				@make -c $(LIBFT_DIR) clean
				@make -c $(FT_PRINTF_DIR) clean

fclean:			clean
				$(RM) $(NAME)
				@make -c $(LIBFT_DIR) fclean
				@make -c $(FT_PRINTF_DIR) clean

re:				fclean all
					
.PHONY:			all clean fclean re