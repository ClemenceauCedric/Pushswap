/*
** header.h for Pushswap in /home/clemen_j/tek1/Pushswap/CPE_2015_Pushswap/my
**
** Made by Cédric Clemenceau
** Login   <clemen_j@epitech.net>
**
** Started on  Thu Nov 19 23:29:37 2015 Cédric Clemenceau
** Last update Sat Feb 13 18:42:54 2016 Clémenceau Cedric
*/

#ifndef HEADER_H_
# define HEADER_H_

# include <stdlib.h>
# include "list.h"
# include <unistd.h>
# include <stdio.h>

void	sa(t_elem *);
t_elem	*get_root();
void	sb(t_elem *);
void	ra(t_elem **);
void	rb(t_elem **);
void	rra(t_elem **);
void	rrb(t_elem **);
int	my_getnbr(char *);
void	my_show_list(t_elem *);
void	pa(t_elem *, t_elem *);
void	pb(t_elem *, t_elem *);
void	ss(t_elem *, t_elem *);
void	rr(t_elem **, t_elem **);
void	rrr(t_elem **, t_elem **);
void	my_put_in_list(t_elem *, int);
int	algo(t_elem **, t_elem **);
void	my_freebox(t_elem *);

#endif /* !HEADER_H_ */
