/*
** get_next_line.c for get_next_line in /home/Neferett/CPE_2016_getnextline
**
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
**
** Started on  Mon Jan  2 10:42:31 2017 Bonaldi Jordan
** Last update Mon Jan  2 21:24:40 2017 Bonaldi Jordan
*/

# include "get_next_line.h"

static int	my_strlen(char *str)
{
  return (*str ? my_strlen(++str) + 1 : 0);
}

static char    *my_strcpy(char *dest, char *src)
{
  int   i;

  i = -1;
  while (src[++i])
    dest[i] = src[i];
  dest[i] = 0;
  return (dest);
}

static char    *my_strcat(char *dest, char src)
{
  int	len;
  char  *arr;

  if (!(arr = malloc(my_strlen(dest) + 2)))
    return (NULL);
  arr = my_strcpy(arr, dest);
  len = my_strlen(dest);
  arr[len] = src;
  arr[++len] = '\0';
  free(dest);
  return (arr);
}

static char		get_next_char(int fd)
{
  static char	buff[READ_SIZE];
  static int	count;
  static int	i;

  if (!i && (count = -1) &&
      (i = read(fd, buff, READ_SIZE)) <= 0)
    return (0);
  i--;
  return (buff[++count]);
}

char		*get_next_line(const int fd)
{
  int		i;
  char		a;
  char		*str;

  i = 0;
  if (!(str = malloc(1)) || !(a = get_next_char(fd))
      || (!(*str = 0) && !(str = my_strcat(str, a))))
    return (NULL);
  while (a != '\n' && a)
    if (++i && (a = get_next_char(fd)) != '\n' && !(str = my_strcat(str, a)))
      return (NULL);
  str[i] = 0;
  return (str);
}
