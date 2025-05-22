/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:21:59 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/22 12:45:55 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "Libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdint.h>

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

t_stack *init_stack(void);
char **ft_complete(int ac, char **av);
void ft_error(char *str);
void create_nodes(t_stack *pila, char **str);
int ft_isnumber(const char *str);

#endif