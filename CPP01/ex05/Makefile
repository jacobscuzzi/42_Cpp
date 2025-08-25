NAME		= Harlinator

SOURCES		= main.cpp Harl.cpp

OBJECTS		= $(SOURCES:.cpp=.o)

CPP			= c++

CPP_FLAGS	= -Wall -Werror -Wextra -std=c++98

RM			= rm -rf


all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPP) $(OBJECTS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
