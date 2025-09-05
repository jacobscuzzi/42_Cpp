NAME = ClapTrap

SRCS = ClapTrap.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = c++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@


clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)


re: fclean all

.PHONY: all clean fclean re