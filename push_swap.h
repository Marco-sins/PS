/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:21:59 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/23 13:46:46 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "Libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdint.h>

#define TRUE 1
#define FALSE 0

typedef struct s_node
{
    int value;
    int index;
    struct s_node *next;
    struct s_node *previus;
}   t_node;

typedef struct s_stack
{
    int args;
    t_node *a;
    t_node *b;
}   t_stack;

void connect_node(t_stack *pila, char **str);
t_node *create_node(int value);
char **ft_complete(int ac, char **av);
int check_av(int ac, char **av);
t_stack *init_stack(int ac);
void free_all(t_stack *pila, char **str);
void ft_error(char *str, t_stack *pila);
int ft_isnumber(const char *str);
void print_stack(t_stack *pila);
void free_stack(t_stack *pila);
void pa(t_stack *pila);
void pb(t_stack *pila);
void sa(t_stack *pila, int p);
void sb(t_stack *pila, int p);
void ss(t_stack *pila);
void ra(t_stack *pila, int p);
void rb(t_stack *pila, int p);
void rr(t_stack *pila);
void rra(t_stack *pila, int p);
void rrb(t_stack *pila, int p);
void rrr(t_stack *pila);
void push_swap(t_stack *pila);
int ft_stack_len(t_node *nodo);

#endif