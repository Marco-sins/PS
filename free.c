/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:54:36 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/23 13:46:30 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_all(t_stack *pila, char **str)
{
    int i;

    i = 0;
    if (pila->a)
        free(pila->a);
    if (pila->b)
        free(pila->b);
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

void free_stack(t_stack *pila)
{
    while (pila->a)
    {
        free(pila->a);
        pila->a = pila->a->next;
    }
    while (pila->b)
    {
        free(pila->b);
        pila->b = pila->b->next;
    }
    if (pila)
        free(pila);
}