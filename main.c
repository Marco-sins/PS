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

char	**join_av(int ac, char **av)
{
	int		i;
	char	*join;
	char	*temp;
	char	**str;

	i = 2;
	join = ft_strdup(av[i - 1]);
	while (i < ac)
	{
		temp = join;
		join = ft_strjoin(join, av[i]);
		free(temp);
		i++;
	}
	str = ft_split(join, ' ');
	free(join);
	return (str);
}

int	main(int ac, char **av)
{
	t_stack	*pila;
	char	**str;

	str = join_av(ac, av);
	if (!check_av(str))
		return (1);
	pila = init_stack();
	if (!pila)
		return (1);
	connect_node(pila, str);
	push_swap(pila);
	free_all(pila, str);
	return (0);
}

/*svoid	print_stack_a(t_stack *pila)
{
	t_node	*node;

	node = pila->a;
	while (node)
	{
		ft_printf("A:%d %d\n", node->value, node->index);
		node = node->next;
	}
}

void	print_stack_b(t_stack *pila)
{
	t_node	*node;

	node = pila->b;
	while (node)
	{
		ft_printf("B:%d %d\n", node->value, node->index);
		node = node->next;
	}
}*/
