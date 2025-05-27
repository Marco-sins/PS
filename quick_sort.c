/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:06:39 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/27 19:59:25 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_mitad(t_node *node)
{
    int i;

    i = ft_stack_len(node) / 2;
    return (i);
}

void quick_sort_a(t_stack *pila)
{
    int size;
    int pivot;
    int push;

    if (is_sorted(pila))
        return;
    size = ft_stack_len(pila->a);
    if (size <= 5)
        sort_five(pila);
    pivot = get_mitad(pila->a);
    push = partition_a(pila, pivot);
    quick_sort_a(pila);
    quick_sort_b(pila);
    while (push--)
        pa(pila);
}

int partition_a(t_stack *pila, int pivot)
{
    int push;
    t_node *node;
    
    push = 0;
    node = pila->a;
    while (node)
    {
        if (node->index < pivot)
            ra(pila, TRUE);
        else
        {
            pb(pila);
            push++;
        }
        node = node->next;
    }
    return (push);
}

void quick_sort_b(t_stack *pila)
{
    int size;
    int pivot;
    int push;

    if (is_sorted(pila))
        return;
    size = ft_stack_len(pila->b);
    if (size <= 5)
        sort_five(pila);
    pivot = get_mitad(pila->b);
    push = partition_b(pila, pivot);
    quick_sort_b(pila);
    quick_sort_a(pila);
    while (push--)
        pb(pila);
}

int partition_b(t_stack *pila, int pivot)
{
    int push;
    t_node *node;
    
    push = 0;
    node = pila->b;
    while (node && node->next)
    {
        if (node->index < pivot)
            rb(pila, TRUE);
        else
        {
            pa(pila);
            push++;
        }
        node = node->next;
    }
    return (push); 
}
