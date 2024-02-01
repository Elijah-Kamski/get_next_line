CC			= cc
CFLAGS		= -Wall -Wextra -Werror

SRC			=	src/get_next_line_bonus.c \
				src/get_next_line_utils_bonus.c \
				test_main/main.c

OBJ 		= $(SRC:.c=.o)
HEADER 		= inc/get_next_line_bonus.h
TARGET 		= get_next_line

all: start_msg $(TARGET) end_msg

start_msg:
	@echo "Compilation started..."

end_msg:
	@echo "Compilation completed."

$(TARGET): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADER)
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files..."
	@rm -f $(OBJ)

fclean: clean
	@echo "Cleaning executable..."
	@rm -f $(TARGET)

re: fclean start_msg all end_msg
	@echo "Recompilation completed."

.PHONY: all start_msg end_msg clean fclean re
