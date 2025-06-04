SRCS			= main.c \
					free.c \
					error.c \
					create_stack.c \
					moves/push.c \
					moves/swap.c \
					moves/rotate.c \
					moves/reverse_rotate.c \
					push_swap.c \
					utils.c \
					algorithm.c \
					radix_sort.c 

OBJDIR			= objs
OBJS			= $(SRCS:%.c=$(OBJDIR)/%.o)

CC				= cc -g
RM				= rm -fr
CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap

LIBFT_DIR		= Libft
FT_PRINTF_DIR	= ft_printf

LIBFT			= $(LIBFT_DIR)/libft.a
FT_PRINTF		= $(FT_PRINTF_DIR)/libftprintf.a

LIBS			= $(LIBFT) $(FT_PRINTF)

all: $(NAME)

$(NAME): $(LIBFT) $(FT_PRINTF) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(FT_PRINTF):
	@make -C $(FT_PRINTF_DIR)

clean:
	$(RM) $(OBJDIR)
	@make -C $(LIBFT_DIR) clean
	@make -C $(FT_PRINTF_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
