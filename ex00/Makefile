SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
NAME = braiiiinzzz
OBJS_DIR = objs/
OBJS = $(SRCS:.cpp=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC = clang++

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@$(CC) $(CC_FLAGS) $(OBJECTS_PREFIXED) -o $(NAME)
	@echo "$(NAME) Done !"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
