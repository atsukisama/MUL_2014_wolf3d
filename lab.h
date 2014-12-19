/*
** lab.h for lab in /home/kerebel/Documents/EPITECH/MUL_2014_wolf3d
** 
** Made by kerebe_p
** Login   <kerebe_p@epitech.eu>
** 
** Started on  Tue Dec 16 14:57:13 2014 kerebe_p
** Last update Tue Dec 16 14:57:13 2014 kerebe_p
*/

#ifndef LAB_H_
# define LAB_H_

typedef struct	t_lab
{
  char	lab[15][15];
  float	x;
  float	y;
  float k;
  int   a;
}		s_lab;

typedef struct	t_move
{
  s_win win;
  s_lab map;
  float s[360];
  float c[360];
}		s_move;

#endif
