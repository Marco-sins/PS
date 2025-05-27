/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:22:34 by marco             #+#    #+#             */
/*   Updated: 2025/05/27 13:15:36 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Sends the last element to the top of the stack

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
    if (p)
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
    if (p)
        ft_printf("rrb\n");
}

void rrr(t_stack *pila)
{
    rra(pila, FALSE);
    rrb(pila, FALSE);
    ft_printf("rrr\n");
}