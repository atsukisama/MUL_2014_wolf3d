/*
** expose.c for expose hook function in /home/kerebe_p/git/MUL_2014_wolf3d
** 
** Made by Paul Kerebel
** Login   <kerebe_p@epitech.net>
** 
** Started on  Mon Dec 15 20:50:16 2014 Paul Kerebel
** Last update Mon Dec 15 20:53:05 2014 Paul Kerebel
*/

#include "my.h"

int	expose_c(s_win *win)
{
  mlx_put_image_to_window(win->mlx_ptr, win->win_ptr, win->d_img.img, 0, 0);
}
