/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:29:34 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/22 12:47:43 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *pila;
    char **str;

    check_av(ac, av);
    pila = init_stack();
    if (ac == 2)
        str = ft_split(av[1], ' ');
    else
        str = ft_complete(ac, av);
    create_nodes(pila, str);
    free_all(pila);
    return (0);
}
