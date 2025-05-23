SRCS			= main.c free.c error.c create_stack.c moves/push.c  
OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -fr
CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap.a

LIBFT_DIR = Libft
FT_PRINTF_DIR = ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF =  $(FT_PRINTF_DIR)/libftprintf.a

LIBS = $(LIBFT) $(FT_PRINTF)

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBS)
				ar rcs $(NAME) $(OBJS) $(LIBS)

$(LIBFT):
				@make -C $(LIBFT_DIR)

$(FT_PRINTF):
				@make -C $(FT_PRINTF_DIR)

clean:
				$(RM) $(OBJS)
				@make -C $(LIBFT_DIR) clean
				@make -C $(FT_PRINTF_DIR) clean

fclean:			clean
				$(RM) $(NAME)
				@make -C $(LIBFT_DIR) fclean
				@make -C $(FT_PRINTF_DIR) fclean

re:				fclean all
					
.PHONY:			all clean fclean re