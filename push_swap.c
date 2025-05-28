/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:37:18 by marco             #+#    #+#             */
/*   Updated: 2025/05/28 12:29:37 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *pila)
{
	int	len;

	len = ft_stack_len(pila->a);
	printf("%d", len);
	ft_preorder(pila, len);
	if (is_sorted(pila->a))
		return ;
	if (len == 2)
		sort_two(pila);
	else if (len == 3)
		sort_three(pila);
	else if (len == 4)
		sort_four(pila);
	else if (len == 5)
		sort_five(pila);
	else
		radix_sort(pila);
}

int	is_sorted(t_node *node)
{
	while (node && node->next)
	{
		if (node->value > node->next->value)
			return (FALSE);
		node = node->next;
	}
	return (TRUE);
}

void	ft_preorder(t_stack *pila, int len)
{
	int		i;
	int		*array;
	t_node	*node;

	array = ft_calloc(sizeof(int), len + 1);
	if (!array)
		ft_error("Error in malloc\n", pila);
	i = 0;
	node = pila->a;
	while (node)
	{
		array[i] = node->value;
		node = node->next;
		i++;
	}
	ft_order_array(array, len, pila);
	ft_set_index(pila, array, len);
	free(array);
}

void	ft_order_array(int *array, int len, t_stack *pila)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				n = array[j];
				array[j] = array[j + 1];
				array[j + 1] = n;
			}
			j++;
		}
		i++;
	}
	if (check_equals(array))
		ft_error("Error: numeros repetidos\n", pila);
}

void	ft_set_index(t_stack *pila, int *array, int len)
{
	t_node	*node;
	int		i;

	node = pila->a;
	while (node)
	{
		i = 0;
		while (i < len)
		{
			if (node->value == array[i])
			{
				node->index = i + 1;
				break ;
			}
			i++;
		}
		node = node->next;
	}
}
