/*
** main.c for Pushswap in /home/clemen_j/tek1/Pushswap/CPE_2015_Pushswap
**
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
**
** Started on  Tue Nov 17 12:59:08 2015 Cédric Clemenceau
** Last update Sat Feb 27 01:10:55 2016 Clémenceau Cedric
*/

#include "header.h"


void		my_freebox(t_elem *root)
{
  t_elem	*tmp;

  tmp = root->next;
  while (tmp != root)
    {
      tmp = tmp->next;
      free(tmp->prev);
    }
  free(root);
}

int		algo(t_elem **l_a, t_elem **l_b)
{
  int		comp;
  t_elem	*tmp;

  while ((*l_a) != (*l_a)->next)
    {
      tmp = (*l_a)->next;
      comp = tmp->nb;
      while (tmp != (*l_a))
	{
	  if (comp > tmp->nb)
	    comp = tmp->nb;
	  tmp = tmp->next;
	}
      while ((*l_a)->next->nb != comp)
      	ra(l_a);
      pb((*l_a), (*l_b));
    }
  while ((*l_b) != (*l_b)->next)
    {
      pa((*l_a), (*l_b));
      if ((*l_b) != (*l_b)->next)
	write(1, " ", 1);
    }
  return (0);
}

void	my_show_list(t_elem *l_a)
{
  t_elem	*tmp;

  tmp = l_a;
  while (tmp->next != l_a)
    {
      tmp = tmp->next;
      printf("%d ", tmp->nb);
    }
}

int		main(int ac, char **av)
{
  t_elem	*l_a;
  t_elem	*l_b;
  int		i;

  l_a = get_root();
  l_b = get_root();
  i = (ac >= 1 ? ac - 1 : 0);
  if (ac <= 1)
    {
      write(1, "too few arguments\n", 18);
      return (0);
    }
  while (i > 0)
    my_put_in_list(l_a, my_getnbr(av[i--]));
  algo(&l_a, &l_b);
  write(1, "\n", 1);
  my_show_list(l_a);
  my_freebox(l_a);
  my_freebox(l_b);
  return (0);
}
