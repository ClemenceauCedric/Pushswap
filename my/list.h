/*
** list.h for Pushswap in /home/clemen_j/tek1/Pushswap/CPE_2015_Pushswap
**
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
**
** Started on  Tue Nov 17 16:17:33 2015 Cédric Clemenceau
** Last update Sun Nov 22 19:03:41 2015 Cédric Clemenceau
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct	s_elem
{
  int		nb;
  struct s_elem	*prev;
  struct s_elem	*next;
}		t_elem;

#endif /* !LIST_H_ */
