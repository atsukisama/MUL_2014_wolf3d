/*
** my_putstr.c for my putstr in /home/kerebe_p/git/Piscine_C_J04
** 
** Made by Paul Kerebel
** Login   <kerebe_p@epitech.net>
** 
** Started on  Thu Oct  2 09:48:51 2014 Paul Kerebel
** Last update Mon Oct 20 13:45:00 2014 Paul Kerebel
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
