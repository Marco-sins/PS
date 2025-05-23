/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:29:34 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/23 10:22:10 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *pila;
    char **str;

    if (check_av(ac, av))
        return (0);
    pila = init_stack();
    if (!pila)
        return (0);
    if (ac == 2)
        str = ft_split(av[1], ' ');
    else
        str = ft_complete(ac, av);
    connect_node(pila, str);
    //ft_algorithm(pila);
    print_stack(pila);
    free_all(pila, str);
    return (0);
}

void print_stack(t_stack *pila)
{
    t_node *node;

    node = pila->a;
    while (node)
    {
        ft_printf("%d", node->value);
        node = node->next;
    }
}
