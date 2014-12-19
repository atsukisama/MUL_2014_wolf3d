/*
** my_strcat.c for my strcat in /home/kerebe_p/git/Piscine_C_J07
** 
** Made by Paul Kerebel
** Login   <kerebe_p@epitech.net>
** 
** Started on  Tue Oct  7 22:50:53 2014 Paul Kerebel
** Last update Wed Oct  8 00:44:52 2014 Paul Kerebel
*/

void	my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
}
