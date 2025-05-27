/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:22:34 by marco             #+#    #+#             */
/*   Updated: 2025/05/27 10:43:28 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rra(t_stack *pila, int p)
{
    t_node *first;
    t_node *last;

    if (!pila->a || !pila->a->next)
        return;
    first = NULL;
    last = pila->a;
    while (last->next)
    {
        first = last;
        last = last->next;
    }
    first->next = NULL;
    last->next = pila->a;
    pila->a = last;
    if (p == 1)
        ft_printf("rra\n");
}

void rrb(t_stack *pila, int p)
{
    t_node *first;
    t_node *last;

    if (!pila->b || !pila->b->next)
        return;
    first = NULL;
    last = pila->b;
    while (last->next)
    {
        first = last;
        last = last->next;
    }
    first->next = NULL;
    last->next = pila->b;
    pila->b = last;
    if (p == 1)
        ft_printf("rrb\n");
}

void rrr(t_stack *pila)
{
    rra(pila, 0);
    rrb(pila, 0);
    ft_printf("rrr\n");
}