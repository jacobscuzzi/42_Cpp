NAME 		= manipulator

SOURCES 	= \
			main.cpp \
			manipulator.cpp

CPP 		= c++

CPP_FLAGS	=	-Werror -Wextra -Wall -std=c++98

REMOVE		= rm -rf

OBJECTS		= $(SOURCES:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@


clean: 
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

