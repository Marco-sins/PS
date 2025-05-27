/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:37:18 by marco             #+#    #+#             */
/*   Updated: 2025/05/27 11:33:36 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_stack *pila)
{
    int len;

    len = ft_stack_len(pila->a);
    if (is_sorted(pila))
        return;
    if (len == 2)
        sort_two(pila);
    else if (len == 3)
        sort_three(pila);
    else if (len == 4)
        sort_four(pila);
    else if (len == 5)
        sort_five(pila);
    else if (len <= 100)
        quick_sort(pila);
    else
        radix_sort(pila);
}

int is_sorted(t_stack *pila)
{
    while (pila->a)
    {
        if (pila->a->value > pila->a->next->value)
            return (FALSE);
        pila->a = pila->a->next;
    }
    return (TRUE);
}

void ft_preorder(t_stack *pila, int len)
{
    int *array;
    int i;
    t_node *node;

    array = ft_calloc(sizeof(int), len);
    if (!array)
        ft_error("Error in malloc\n", pila);
    i = 0;
    node = pila->a;
    while (i < len - 1)
    {
        array[i] = node->value;
        node = node->next;
        i++;
    }
    array = ft_order_array(array);
    ft_set_index(pila, array);
}

