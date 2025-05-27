/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:06:02 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/27 19:27:56 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_two(t_stack *pila)
{
    sa(pila, TRUE);
}

void sort_three(t_stack *pila)
{
    t_node *node;

    node = pila->a;
    if (node->index == 2 && node->next->index == 1)
        sa(pila, TRUE);
    else if (node->index == 3 && node->next->index == 1)
        ra(pila, TRUE);
    else if (node->next->index == 3 && node->next->next->index == 2)
    {
        ra(pila, TRUE);
        sa(pila, TRUE);
        rra(pila, TRUE);
    }
    else if (node->index == 2 && node->next->index == 3)
        rra(pila, TRUE);
}

void sort_four(t_stack *pila)
{
    t_node *node;

    node = pila->a;
    if (node->next->index == 4)
        ra(pila, TRUE);
    else if (node->next->next->index == 4)
    {
        ra(pila, TRUE);
        ra(pila, TRUE);
    }
    else if (node->next->next->next->index == 4)
        rra(pila, TRUE);
    pb(pila);
    sort_three(pila);
    pa(pila);
    ra(pila, TRUE);
}

void sort_five(t_stack *pila)
{
    t_node *node;

    node = pila->a;
    if (node->next->index == 5)
        ra(pila, TRUE);
    else if (node->next->next->index == 5)
    {
        ra(pila, TRUE);
        ra(pila, TRUE);
    }
    else if (node->next->next->next->index == 5)
    {
        rra(pila, TRUE);
        rra(pila, TRUE);
    }
    else if (node->next->next->next->next->index == 5)
        rra(pila, TRUE);
    pb(pila);
    sort_four(pila);
    pa(pila);
    ra(pila, TRUE);
}
