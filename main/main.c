/*
** main.c for main in /home/Neferett/bin/IMPORT
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Nov 14 14:04:13 2016 Bonaldi Jordan
** Last update Thu Jan  5 15:45:05 2017 Bonaldi Jordan
*/

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "get_next_line.h"

int	main(void)
{
  char	*s;

  while ((s = get_next_line(0)))
    {
      free(s);
    }
  return (0);
}
