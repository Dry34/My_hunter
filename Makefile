##
## EPITECH PROJECT, 2022
## makefile my_printf
## File description:
## makefile my_printf
##

CSFML = -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

SRC = $(wildcard src/*.c)
SRC2 = $(wildcard printf/*.c)

OBJ = $(SRC:.c=.o)
OBJ += $(SRC2:.c=.o)

TARGET = my_hunter

$(TARGET) : $(OBJ)
	gcc -o $(TARGET) -I../includes $(OBJ) $(CSFML)

all: $(TARGET)

clean :
	rm -rf *.html
	rm -rf *.css
	rm -rf html


fclean : clean
	rm -rf $(TARGET)

re : fclean all
