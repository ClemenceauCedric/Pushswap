/*
** fct.c for Pushswap in /home/clemen_j/tek1/Pushswap/CPE_2015_Pushswap/lib
**
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
**
** Started on  Fri Nov 20 12:02:04 2015 Cédric Clemenceau
** Last update Sun Nov 22 19:02:11 2015 Cédric Clemenceau
*/

#include "header.h"

t_elem		*get_root()
{
  t_elem	*root;

  if ((root = malloc(sizeof(t_elem))) == NULL)
    return (NULL);
  root->next = root;
  root->prev = root;
  return (root);
}

void		my_put_in_list(t_elem *list, int nb)
{
  t_elem	*elem;

  if ((elem = malloc(sizeof(t_elem))) == NULL)
    return ;
  elem->nb = nb;
  elem->next = list->next;
  elem->prev = list;
  list->next->prev = elem;
  list->next = elem;
}

void	rra(t_elem **l_a)
{
  (*l_a)->nb = (*l_a)->prev->nb;
  *l_a = (*l_a)->prev;
}

void	rrb(t_elem **l_b)
{
  (*l_b)->nb = (*l_b)->prev->nb;
  *l_b = (*l_b)->prev;
}
