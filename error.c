/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:48:16 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/23 10:05:05 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_error(char *str, t_stack *pila)
{
    ft_printf("%s", str);
    free_stack(pila);
    exit(1);
}

int ft_isnumber(const char *str)
{
    int i;

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

int check_equals(int *array)
{
    int i;
    
    i = 0;
    while (array[i] && array[i + 1])
    {
        if (array[i] == array[i + 1])
            return (TRUE);
        i++;
    }
    return (FALSE);
}