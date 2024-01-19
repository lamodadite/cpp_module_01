NAME = ex00
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
INCS = Zombie.hpp
OBJ_DIR = objs
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $^

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CPP) $(CPPFLAGS) -c -o $@ $< -I $(INCS)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
