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

int	check_equals(int *array)
{
	int	i;

	i = 0;
	while (array[i] && array[i + 1])
	{
		if (array[i] == array[i + 1])
			return (TRUE);
		i++;
	}
	return (FALSE);
}
