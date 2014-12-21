/*
** lab.c for test in /home/kerebel/Documents/EPITECH/MUL_2014_wolf3d
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Tue Dec 16 17:46:11 2014 kerebe_p
** Last update Tue Dec 16 17:46:11 2014 kerebe_p
*/

#include "include/my.h"

void	level_one(s_lab *map)
{
  my_strcpy(map->lab[0], "111111111111111");
  my_strcpy(map->lab[1], "120000000000001");
  my_strcpy(map->lab[2], "101010101010101");
  my_strcpy(map->lab[3], "101000101000101");
  my_strcpy(map->lab[4], "101010101010101");
  my_strcpy(map->lab[5], "101000000000101");
  my_strcpy(map->lab[6], "101110000011101");
  my_strcpy(map->lab[7], "100000000000001");
  my_strcpy(map->lab[8], "101110000011101");
  my_strcpy(map->lab[9], "101000000000101");
  my_strcpy(map->lab[10], "101010101010101");
  my_strcpy(map->lab[11], "101000101000101");
  my_strcpy(map->lab[12], "101010101010101");
  my_strcpy(map->lab[13], "100000000000001");
  my_strcpy(map->lab[14], "111111111111111");
  map->x = 7.5;
  map->y = 7.5;
  map->k = 1;
  map->a = 180;
}

void	level_two(s_lab *map)
{
  my_strcpy(map->lab[0], "111111111111111");
  my_strcpy(map->lab[1], "100000000000001");
  my_strcpy(map->lab[2], "101011111110101");
  my_strcpy(map->lab[3], "100000000000001");
  my_strcpy(map->lab[4], "101110101011101");
  my_strcpy(map->lab[5], "101000000000101");
  my_strcpy(map->lab[6], "101110000011101");
  my_strcpy(map->lab[7], "100010000010001");
  my_strcpy(map->lab[8], "100011000110001");
  my_strcpy(map->lab[9], "101001101100101");
  my_strcpy(map->lab[10], "100000101000001");
  my_strcpy(map->lab[11], "101000101000101");
  my_strcpy(map->lab[12], "101010101010101");
  my_strcpy(map->lab[13], "100000000000001");
  my_strcpy(map->lab[14], "111111111111111");
  map->x = 13.5;
  map->y = 7.5;
  map->k = 1;
  map->a = 180;
}

void	square_put(s_win *win, int x, int y, int color)
{
  int	x1;
  int	y1;
  int	tmp;

  x1 = x + MSIZE;
  y1 = y + MSIZE;
  tmp = x;
  while (y < y1)
    {
      x = tmp;
      while (x < x1)
	{
	  my_pixel_img(x, y, win, color);
	  x = x + 1;
	}
      y = y + 1;
    }
}

void	put_map_line(s_move *game, int y, int y1)
{
  int	x;
  int	x1;

  x = 0;
  x1 = 5;
  while (x < 15)
    {
      if (game->map.lab[y][x] == '1')
	square_put(&(game->win), x1, y1, 0x000000);
      else if ((int)game->map.y  == x && (int)game->map.x == y)
	square_put(&(game->win), x1, y1, 0xFF0000);
      else
	square_put(&(game->win), x1, y1, 0xFFFFFF);
      x = x + 1;
      x1 = x1 + MSIZE;
    }
}

void	put_map(s_move *game)
{
  int	y;
  int	y1;

  y = 0;
  y1 = 5;
  while (y < 15)
    {
      put_map_line(game, y, y1);
      y = y + 1;
      y1 = y1 + MSIZE;
    }
}
