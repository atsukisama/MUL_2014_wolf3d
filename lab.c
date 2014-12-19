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
  my_strcat(map->lab[0], "111111111111111");
  my_strcat(map->lab[1], "120000000000001");
  my_strcat(map->lab[2], "101010101010101");
  my_strcat(map->lab[3], "101000101000101");
  my_strcat(map->lab[4], "101010101010101");
  my_strcat(map->lab[5], "101000000000101");
  my_strcat(map->lab[6], "101110000011101");
  my_strcat(map->lab[7], "100000000000001");
  my_strcat(map->lab[8], "101110000011101");
  my_strcat(map->lab[9], "101000000000101");
  my_strcat(map->lab[10], "101010101010101");
  my_strcat(map->lab[11], "101000101000101");
  my_strcat(map->lab[12], "101010101010101");
  my_strcat(map->lab[13], "100000000000001");
  my_strcat(map->lab[14], "111111111111111");
  map->x = 7.5;
  map->y = 7.5;
  map->k = 0;
  map->a = 90;
}
