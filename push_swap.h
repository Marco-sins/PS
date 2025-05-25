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
#include <stdbool.h>

typedef struct s_node
{
    int value;
    struct s_node *next;
    struct s_node *previus;
}   t_node;

typedef struct s_stack
{
    t_node *a;
    t_node *b;
}   t_stack;

void connect_node(t_stack *pila, char **str);
t_node *create_node(int value);
char **ft_complete(int ac, char **av);
int check_av(int ac, char **av);
t_stack *init_stack(void);
void free_all(t_stack *pila, char **str);
void ft_error(char *str, t_stack *pila);
int ft_isnumber(const char *str);
void print_stack(t_stack *pila);
void free_stack(t_stack *pila);

#endif