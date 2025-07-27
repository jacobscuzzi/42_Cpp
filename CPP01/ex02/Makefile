NAME =		brain

SRCS = 		main.cpp
CPP =		c++

CPP_FLAGS =	-Werror -Wextra -Wall -std=c++98

RM =		rm -f

OBJS =		$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re