/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:47:13 by marco             #+#    #+#             */
/*   Updated: 2025/05/28 12:47:13 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(int ac)
{
	t_stack	*pila;

	pila = (t_stack *)malloc(sizeof(t_stack));
	if (!pila)
		return (0);
	pila->a = NULL;
	pila->b = NULL;
	pila->args = ac;
	return (pila);
}

int	check_av(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (!ft_isdigit(av[1][i]) && av[1][i] != ' ' && av[1][i] != '-'
				&& av[1][i] != '+')
				return (FALSE);
			i++;
		}
	}
	else if (ac > 2)
	{
		while (av[i + 1])
		{
			if (!ft_isnumber(av[i + 1]))
				return (FALSE);
			i++;
		}
	}
	else
		return (FALSE);
	return (TRUE);
}

char	**ft_complete(int ac, char **av)
{
	char	**str;
	int		i;

	str = (char **)ft_calloc(ac, sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ac - 1)
	{
		str[i] = av[i + 1];
		i++;
	}
	str[i] = NULL;
	return (str);
}

t_node	*create_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (0);
	node->value = value;
	node->next = NULL;
	return (node);
}

void	connect_node(t_stack *pila, char **str)
{
	t_node	*node;
	t_node	*new;
	int		i;

	i = 0;
	node = NULL;
	new = NULL;
	while (str[i] != NULL)
	{
		new = create_node(ft_atoi(str[i]));
		if (!new)
			ft_error("Error in malloc\n", pila);
		if (!pila->a)
			pila->a = new;
		else
		{
			node = pila->a;
			while (node->next)
				node = node->next;
			node->next = new;
		}
		i++;
	}
}
