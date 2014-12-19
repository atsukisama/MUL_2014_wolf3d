/*
** struc.h for struc in /home/kerebe_p/git/MUL_2014_wolf3d
** 
** Made by Paul Kerebel
** Login   <kerebe_p@epitech.net>
** 
** Started on  Mon Dec 15 19:26:07 2014 Paul Kerebel
** Last update Mon Dec 15 21:09:31 2014 Paul Kerebel
*/

#ifndef MY_H_
# define MY_H_
# define WIDTH 1920
# define HEIGHT 1080
# define KEY(x) (x - 65361)

#include <X11/Xlib.h>
#include <stdlib.h>
#include <math.h>
#include "minilibx/mlx.h"
#include "struc.h"
#include "lab.h"

int	expose_c(s_win *win);
int	key_touch(int key, s_move *game);

#endif
