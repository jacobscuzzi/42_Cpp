NAME		= fixed_point_number_zero

CPP			= c++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

SRCS		= Fixed.cpp main.cpp

OBJS		= $(SRCS:%.cpp=%.o)


all: $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) $(OBJS) -o $(NAME)


%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)