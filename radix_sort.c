/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:06:53 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/28 12:25:15 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *pila)
{
	int			i;
	int			size;
	uint32_t	bit;

	i = 0;
	size = ft_stack_len(pila->a);
	bit = 0b1;
	while (!is_sorted(pila->a))
	{
		while (i < size)
		{
			if (pila->a->index & bit)
				ra(pila, TRUE);
			else
				pb(pila);
			i++;
		}
		while (ft_stack_len(pila->b) > 0)
			pa(pila);
		bit <<= 1;
		i = 0;
	}
}
