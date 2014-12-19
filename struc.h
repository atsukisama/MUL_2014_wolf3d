/*
** struc.h for struc in /home/kerebe_p/git/MUL_2014_wolf3d
** 
** Made by Paul Kerebel
** Login   <kerebe_p@epitech.net>
** 
** Started on  Mon Dec 15 19:26:07 2014 Paul Kerebel
** Last update Mon Dec 15 19:35:21 2014 Paul Kerebel
*/

#ifndef STRUC_H_
# define STRUC_H_

typedef struct	t_image
{
  void	*img;
  char	*data;
  int	bpp;
  int	szl;
  int	endian;
}		s_img;

typedef struct	t_window
{
  void	*mlx_ptr;
  void	*win_ptr;
  s_img	d_img;
  int	w;
  int	h;
}		s_win;

#endif
