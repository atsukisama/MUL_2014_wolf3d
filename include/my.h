/*
** my.h for lib in /home/kerebel/Documents/EPITECH/MUL_2014_wolf3d
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Wed Dec 17 02:39:34 2014 kerebe_p
** Last update Wed Dec 17 02:39:34 2014 kerebe_p
*/

#ifndef MY_H_
# define MY_H_
# define WIDTH 1200
# define HEIGHT 900
# define PI 3.14159265359
# define KEY(x) (x - 65361)

#include <X11/Xlib.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "mlx.h"
#include "struc.h"
#include "lab.h"

void	background(s_win *win);
void	draw_wall(s_move *game, int x);
void	k_inter(s_move *game, float x1, float y1);
void	vision_field(s_move *game);
int	expose_c(s_win *win);
void	up_move(s_move *game);
void	down_move(s_move *game);
void	left_move(s_move *game);
void	right_move(s_move *game);
int	key_touch(int key, s_move *game);
void	level_one(s_lab *map);
void	fill_sin(s_move *game);
void	fill_cos(s_move *game);
int	init_w(s_win *win);
int	my_pixel_img(int x, int y, s_win *win, int color);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_strcat(char *dest, char *src);

#endif
