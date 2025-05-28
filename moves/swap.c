/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:01:13 by marco             #+#    #+#             */
/*   Updated: 2025/05/27 13:15:43 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Swaps the 2 first elements of the stack

void	sa(t_stack *pila, int p)
{
	t_node	*first;
	t_node	*second;

	if (pila->a == NULL || pila->a->next == NULL)
		return ;
	first = pila->a;
	second = pila->a->next;
	first->next = second->next;
	second->next = first;
	pila->a = second;
	if (p)
		ft_printf("sa\n");
}

void	sb(t_stack *pila, int p)
{
	t_node	*first;
	t_node	*second;

	if (pila->b == NULL || pila->b->next == NULL)
		return ;
	first = pila->b;
	second = pila->b->next;
	first->next = second->next;
	second->next = first;
	pila->b = second;
	if (p)
		ft_printf("sb\n");
}

void	ss(t_stack *pila)
{
	sa(pila, FALSE);
	sb(pila, FALSE);
	ft_printf("ss\n");
}
