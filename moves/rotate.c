/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:08:44 by marco             #+#    #+#             */
/*   Updated: 2025/05/27 10:43:24 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_stack *pila, int p)
{
    t_node *first;
    t_node *last;

    if (!pila->a || !pila->a->next)
        return;
    first = pila->a;
    pila->a = pila->a->next;
    last = pila->a;
    while (last->next)
        last = last->next;
    last->next = first;
    first->next = NULL;
    if (p == 1)
        ft_printf("ra\n");
}

void rb(t_stack *pila, int p)
{
    t_node *first;
    t_node *last;

    if (!pila->b || !pila->b->next)
        return;
    first = pila->b;
    pila->b = pila->b->next;
    last = pila->b;
    while (last->next)
        last = last->next;
    last->next = first;
    first->next = NULL;
    if (p == 1)
        ft_printf("rb\n");
}

void rr(t_stack *pila)
{
    ra(pila, 0);
    rb(pila, 0);
    ft_printf("rr\n");
}