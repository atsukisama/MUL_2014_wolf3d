##
## Makefile for make in /home/kerebe_p/git/minilibx
## 
## Made by Paul Kerebel
## Login   <kerebe_p@epitech.net>
## 
## Started on  Fri Oct 31 14:34:55 2014 Paul Kerebel
## Last update Mon Dec 15 21:07:37 2014 Paul Kerebel
##

SRC	= main.c \
	  my_pixel_put.c \
	  expose.c \
	  lab.c \
	  my_putstr.c \
	  my_putchar.c \
	  my_strcat.c \
	  display_wolf.c \
	  key.c

NAME	= wolf3d

OBJ	= $(SRC:.c=.o)

RM	= rm -f

##CFLAGS	+= -Wextra -Wall -Werror
##CFLAGS	+= -ansi -pedantic
##CFLAGS	+= -I.
CFLAGS	+= -lmlx -L./minilibx -lm
CFLAGS	+= -L/usr/lib64 -lmlx_x86_64 -L/usr/lib64/X11 -lXext -lX11

all:	$(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
