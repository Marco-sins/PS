/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:01:13 by marco             #+#    #+#             */
/*   Updated: 2025/05/27 10:43:19 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_stack *pila, int p)
{
    t_node *nodo;

    if (pila->a == NULL || pila->a->next == NULL)
        return;
    nodo = pila->a;
    pila->a = pila->a->next;
    pila->a->next = nodo;
    if (p == 1)
        ft_printf("sa\n");
}

void sb(t_stack *pila, int p)
{
    t_node *nodo;

    if (pila->b == NULL || pila->b->next == NULL)
        return;
    nodo = pila->b;
    pila->b = pila->b->next;
    pila->b->next = nodo;
    if (p == 1)
        ft_printf("sb\n");
}

void ss(t_stack *pila)
{
    sa(pila, 0);
    sb(pila, 0);
    ft_printf("ss\n");
}