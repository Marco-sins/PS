/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:39:03 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/22 14:40:05 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Sends the first element of the stack to the another stack

void	pa(t_stack *pila)
{
	t_node	*nodo;

	if (pila->b == NULL)
		return ;
	nodo = pila->b;
	pila->b = pila->b->next;
	nodo->next = pila->a;
	pila->a = nodo;
	ft_printf("pa\n");
}

void	pb(t_stack *pila)
{
	t_node	*nodo;

	if (pila->a == NULL)
		return ;
	nodo = pila->a;
	pila->a = pila->a->next;
	nodo->next = pila->b;
	pila->b = nodo;
	ft_printf("pb\n");
}
