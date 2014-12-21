/*
** display_wolf.c for display wolf in /home/kerebel/Documents/EPITECH/MUL_2014_wolf3d
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Wed Dec 17 02:39:34 2014 kerebe_p
** Last update Wed Dec 17 02:39:34 2014 kerebe_p
*/

#include "include/my.h"

void	background(s_win *win)
{
  int	x;
  int	y;
  int	color;

  y = 0;
  color = 0x33CCFF;
  while (y < HEIGHT)
    {
      x = 0;
      while (x < WIDTH)
	{
	  my_pixel_img(x, y, win, color);
	  x = x + 1;
	}
      y = y + 1;
      if (y == (HEIGHT / 2))
	color = 0x003333;
    }
}

void	draw_wall(s_move *game, int x)
{
  int	size;
  int	i;
  int	y;

  size = (HEIGHT / (2 * game->map.k)) * 2;
  i = 0;
  while (i <= size)
    {
      y = HEIGHT / 2 - (size / 2 - i);
      my_pixel_img(x, y, &(game->win), 0x222222);
      i = i + 1;
    }
}

void	k_inter(s_move *game, float x1, float y1)
{
  int	x;
  int	y;

  game->map.k = 1.0;
  x = game->map.x + game->map.k * (x1 - game->map.x);
  y = game->map.y + game->map.k * (y1 - game->map.y);
  while (game->map.lab[x][y] != '1')
    {
      x = game->map.x + game->map.k * (x1 - game->map.x);
      y = game->map.y + game->map.k * (y1 - game->map.y);
      game->map.k = game->map.k + 0.01;
    }
}

void	vision_field(s_move *game)
{
  float x1;
  float y1;
  int	i;

  i = 0;
  background(&(game->win));
  while (i < WIDTH)
    {
      y1 = ((WIDTH / 2) - (float)i) / WIDTH;
      x1 = 0.5 * game->c[game->map.a] - y1 * game->s[game->map.a];
      y1 = 0.5 * game->s[game->map.a] + y1 * game->c[game->map.a];
      x1 = x1 + game->map.x;
      y1 = y1 + game->map.y;
      k_inter(game, x1, y1);
      draw_wall(game, i);
      i = i + 1;
    }
  put_map(game);
  mlx_put_image_to_window(game->win.mlx_ptr, game->win.win_ptr,
			  game->win.d_img.img, 0, 0);
}
