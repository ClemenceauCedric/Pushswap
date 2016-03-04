/*
** push_fct2.c for push_swap in /home/clemen_j/tek1/Pushswap/CPE_2015_Pushswap/lib
**
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
**
** Started on  Sun Nov 22 00:53:34 2015 Cédric Clemenceau
** Last update Sun Nov 22 03:31:21 2015 Cédric Clemenceau
*/

#include "header.h"

void	sb(t_elem *l_b)
{
  int	tmp;
  if (l_b->prev != l_b->next)
    {
      tmp = l_b->next->nb;
      l_b->next->nb = l_b->next->next->nb;
      l_b->next->next->nb = tmp;
    }
}

void	ss(t_elem *l_a, t_elem *l_b)
{
  sa(l_a);
  sb(l_b);
}

void	rr(t_elem **l_a, t_elem **l_b)
{
  (*l_a)->nb = (*l_a)->next->nb;
  *l_a = (*l_a)->next;
  (*l_b)->nb = (*l_b)->next->nb;
  *l_b = (*l_b)->next;
}

void	rrr(t_elem **l_a, t_elem **l_b)
{
  (*l_a)->nb = (*l_a)->prev->nb;
  *l_a = (*l_a)->prev;
  (*l_b)->nb = (*l_b)->prev->nb;
  *l_b = (*l_b)->prev;
}
