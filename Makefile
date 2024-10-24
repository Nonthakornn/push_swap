NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIBFT_DIR =  libft
FT_PRINTF_DIR =  ft_printf

LIBFT_LIB = $(LIBFT_DIR)/libft.a
FT_PRINTF_LIB = $(FT_PRINTF_DIR)/libftprintf.a

IFLAGS = -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR)

RULE_FILES = main.c push.c rotate.c \
				reverse_rotate.c swap.c

OBJ_FILES = $(RULE_FILES:.c=.o)

#target:	prerequisite
all:		$(LIBFT_DIR) $(FT_PRINTF_DIR) $(NAME)

$(NAME):	$(LIBFT_DIR) $(FT_PRINTF_DIR) $(OBJ_FILES)	
			@$(CC) $(CFLAGS) $(OBJ_FILES) $(LIBFT_LIB) $(FT_PRINTF_LIB) -o $(NAME)
			@echo "Done building push_swap"

%.o:		%.c
			@echo $< $@
			$(CC) $(CFLAGS) $(IFLAGS) -c $? -o $@

vg:			all
			valgrind --leak-check=full --show-leak-kinds=all ./push_swap

libft:
			@make -C $(LIBFT_DIR)
			@echo "build libft success"

ft_printf:
			@make -C $(FT_PRINTF_DIR)
			@echo "build ft_printf success"

clean:
			@make clean -C $(LIBFT_DIR)
			@make clean -C $(FT_PRINTF_DIR)
			@${RM} ${OBJ_FILES}
			@echo "clean success"

fclean:		clean
			@make fclean -C $(LIBFT_DIR)
			@make fclean -C $(FT_PRINTF_DIR)	
			$(RM) $(NAME)
			@echo "fclean Success"

re:			fclean all

.PHONY:		libft ft_printf clean fclean re vg