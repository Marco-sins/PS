/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:47:43 by marco             #+#    #+#             */
/*   Updated: 2025/05/28 12:47:43 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*pila;
	char	**str;

	if (!check_av(ac, av))
		return (1);
	pila = init_stack(ac);
	if (!pila)
		return (1);
	if (ac == 2)
		str = ft_split(av[1], ' ');
	else
		str = ft_complete(ac, av);
	connect_node(pila, str);
	push_swap(pila);
	print_stack(pila);
	free_all(pila, str);
	return (0);
}

void	print_stack(t_stack *pila)
{
	t_node	*node;

	node = pila->a;
	while (node)
	{
		ft_printf("%d %d\n", node->value, node->index);
		node = node->next;
	}
}
