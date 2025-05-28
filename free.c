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

void	free_all(t_stack *pila, char **str)
{
	int	i;

	i = 0;
	free_stack(pila);
	if (str != NULL)
	{
		while (str[i] != NULL && pila->args == 2)
		{
			free(str[i]);
			i++;
		}
		free(str);
	}
}

void	free_stack(t_stack *pila)
{
	t_node	*tmp;

	while (pila->a != NULL)
	{
		tmp = pila->a->next;
		free(pila->a);
		pila->a = tmp;
	}
	while (pila->b != NULL)
	{
		tmp = pila->b->next;
		free(pila->b);
		pila->b = tmp;
	}
	free(pila);
}
