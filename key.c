/*
** key.c for key hook function in /home/kerebe_p/git/MUL_2014_wolf3d
** 
** Made by Paul Kerebel
** Login   <kerebe_p@epitech.net>
** 
** Started on  Mon Dec 15 21:04:02 2014 Paul Kerebel
** Last update Mon Dec 15 21:09:49 2014 Paul Kerebel
*/

#include "include/my.h"

void	up_move(s_move *game)
{
  float	x;
  float y;

  x = game->map.x + (MSPEED * game->c[game->map.a]);
  y = game->map.y + (MSPEED * game->s[game->map.a]);
  if (game->map.lab[(int)x][(int)y] != '1')
    {
      game->map.x = x;
      game->map.y = y;
      vision_field(game);
    }
  if (game->map.lab[(int)x][(int)y] == '2')
    level_two(&(game->map));
}

void	down_move(s_move *game)
{
  float x;
  float y;

  x = game->map.x - (MSPEED * game->c[game->map.a]);
  y = game->map.y - (MSPEED * game->s[game->map.a]);
  if (game->map.lab[(int)x][(int)y] != '1')
    {
      game->map.x = x;
      game->map.y = y;
      vision_field(game);
    }
  if (game->map.lab[(int)x][(int)y] == '2')
    level_two(&(game->map));
}

void	left_move(s_move *game)
{
  game->map.a = (game->map.a + RSPEED) % 360;
  vision_field(game);
}

void	right_move(s_move *game)
{
  game->map.a = game->map.a - RSPEED;
  if (game->map.a < 0)
    game->map.a = 360 + game->map.a;
  vision_field(game);
}

int	key_touch(int key, s_move *game)
{
  void  (*move[4])(s_move*);

  if (key == 65307)
    exit(0);
  move[0] = &left_move;
  move[1] = &up_move;
  move[2] = &right_move;
  move[3] = &down_move;
  if (KEY(key) >= 0 && KEY(key) <= 3)
    move[KEY(key)](game);
  return (0);
}
