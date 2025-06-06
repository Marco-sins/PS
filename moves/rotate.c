/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:08:44 by marco             #+#    #+#             */
/*   Updated: 2025/05/27 13:15:54 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Sends the first element at the end

void	ra(t_stack *pila, int p)
{
	t_node	*first;
	t_node	*last;

	if (!pila->a || !pila->a->next)
		return ;
	first = pila->a;
	pila->a = pila->a->next;
	last = pila->a;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	if (p)
		ft_printf("ra\n");
}

void	rb(t_stack *pila, int p)
{
	t_node	*first;
	t_node	*last;

	if (!pila->b || !pila->b->next)
		return ;
	first = pila->b;
	pila->b = pila->b->next;
	last = pila->b;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	if (p)
		ft_printf("rb\n");
}

void	rr(t_stack *pila)
{
	ra(pila, FALSE);
	rb(pila, FALSE);
	ft_printf("rr\n");
}
