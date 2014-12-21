/*
** main.c for main in /home/kerebel/MUL_2014_wolf3d
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Mon Dec 15 18:11:04 2014 kerebe_p
** Last update Mon Dec 15 21:20:03 2014 Paul Kerebel
*/

#include "include/my.h"

void	fill_sin(s_move *game)
{
  int	i;
  float rad;

  i = 0;
  while (i <= 360)
    {
      rad = (float)i * (PI / 180);
      game->s[i] = sin(rad);
      i = i + 1;
    }
}

void	fill_cos(s_move *game)
{
  int	i;
  float rad;

  i = 0;
  while (i <= 360)
    {
      rad = (float)i * (PI / 180);
      game->c[i] = cos(rad);
      i = i + 1;
    }
}

int	init_w(s_win *win)
{
  if ((win->mlx_ptr = mlx_init()) == NULL)
    {
      my_putstr("Failed to initialize window!\n");
      return (-1);
    }
  win->w = WIDTH;
  win->h = HEIGHT;
  win->win_ptr = mlx_new_window(win->mlx_ptr, win->w, win->h,
				"Wolf3d");
  win->d_img.img = mlx_new_image(win->mlx_ptr, win->w, win->h);
  win->d_img.data = mlx_get_data_addr(win->d_img.img, &(win->d_img.bpp),
				       &(win->d_img.szl),
				       &(win->d_img.endian));
  return (0);
}

int		main()
{
  s_move	game;

  if (init_w(&(game.win)) == -1)
    return (-1);
  level_one(&(game.map));
  fill_sin(&game);
  fill_cos(&game);
  mlx_expose_hook(game.win.win_ptr, expose_c, &(game.win));
  mlx_hook(game.win.win_ptr, KeyPress, KeyPressMask, key_touch, &game);
  vision_field(&game);
  mlx_loop(game.win.mlx_ptr);
  return (0);
}
