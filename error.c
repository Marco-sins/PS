/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:47:26 by marco             #+#    #+#             */
/*   Updated: 2025/05/28 12:47:26 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str, t_stack *pila)
{
	ft_printf("%s", str);
	free_stack(pila);
	exit(1);
}

int	ft_isnumber(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (FALSE);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	check_equals(t_stack *pila)
{
	int	*array;
	t_node	*node;

	node = pila->a;
	array = ft_calloc(sizeof(int), ft_stack_len(node) + 1);
	if (!array)
		ft_error("Malloc", pila);
	while (node)
	{
		if (array[node->index - 1])
		{
			free(array);
			return (TRUE);
		}
		array[node->index - 1] = 1;
		node = node->next;
	}
	free(array);
	return (FALSE);
}
