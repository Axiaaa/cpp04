NAME = Animal
SRCS = main.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Dog.cpp Cat.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
DIR = .build
OBJS := $(addprefix $(DIR)/, $(OBJS))


all: $(NAME)

$(NAME): $(DIR) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(DIR)/%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(DIR):
	mkdir -p $(DIR)


clean:
	rm -fr $(DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re