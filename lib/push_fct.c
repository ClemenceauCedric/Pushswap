/*
** push_fct.c for push_swap in /home/clemen_j/tek1/Pushswap/CPE_2015_Pushswap/lib
**
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
**
** Started on  Sat Nov 21 20:55:32 2015 Cédric Clemenceau
** Last update Sun Nov 22 18:27:45 2015 Cédric Clemenceau
*/

#include "header.h"

void	sa(t_elem *l_a)
{
  int	tmp;

  if (l_a->prev != l_a->next)
    {
      tmp = l_a->next->next->nb;
      l_a->next->next->nb = l_a->next->nb;
      l_a->next->nb = tmp;
    }
  write(1, "sa ", 3);
}

void		pa(t_elem *l_a, t_elem *l_b)
{
  t_elem	*tmp;

  if (l_b->prev != l_b)
    {
      tmp = l_b->next;
      l_b->next = l_b->next->next;
      l_b->next->prev = l_b;
      l_a->next->prev = tmp;
      tmp->next = l_a->next;
      l_a->next = tmp;
      tmp->prev = l_a;
    }
  write(1, "pa", 2);
}

void		pb(t_elem *l_a, t_elem *l_b)
{
  t_elem	*tmp;

  if (l_a->prev != l_a)
    {
      tmp = l_a->next;
      l_a->next = l_a->next->next;
      l_a->next->prev = l_a;
      l_b->next->prev = tmp;
      tmp->next = l_b->next;
      l_b->next = tmp;
      tmp->prev = l_b;
    }
  write(1, "pb ", 3);
}

void	ra(t_elem **l_a)
{
  (*l_a)->nb = (*l_a)->next->nb;
  *l_a = (*l_a)->next;
  write(1, "ra ", 3);
}

void	rb(t_elem **l_b)
{
  (*l_b)->nb = (*l_b)->next->nb;
  *l_b = (*l_b)->next;
  write(1, "rb ", 3);
}
