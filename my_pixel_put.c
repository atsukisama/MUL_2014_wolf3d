/*
** my_pixel_put.c for pixel_put in /home/kerebe_p/git/MUL_2014_wolf3d
** 
** Made by Paul Kerebel
** Login   <kerebe_p@epitech.net>
** 
** Started on  Mon Dec 15 20:21:34 2014 Paul Kerebel
** Last update Mon Dec 15 21:19:22 2014 Paul Kerebel
*/

#include "my.h"

int	my_pixel_img(int x, int y, s_win *win, int color)
{
  int	pix;

  if (x < 0 || y < 0 || x > win->w || y > win->h)
    return (-1);
  pix = x * 4 + win->d_img.szl * y;
  (win->d_img.data)[pix] = color;
  (win->d_img.data)[pix + 1] = color >> 8;
  (win->d_img.data)[pix + 2] = color >> 16;
}
