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

    printf("DEBBUG: 1\n");
    if (!check_av(ac, av))
    {
        printf("DEBBUG: 0\n");
        return (1);
    }
    pila = init_stack(ac);
    printf("DEBBUG: 2\n");
    if (!pila)
        return (1);
    if (ac == 2)
        str = ft_split(av[1], ' ');
    else
        str = ft_complete(ac, av);
    printf("DEBBUG: 3\n");
    connect_node(pila, str);
    printf("DEBBUG: 4\n");
    print_stack(pila);
    push_swap(pila);
    printf("DEBBUG: 5\n");
    print_stack(pila);
    printf("DEBBUG: 6\n");
    free_all(pila, str);
    printf("DEBBUG: 7\n");
    return (0);
}

void print_stack(t_stack *pila)
{
    t_node *node;

    node = pila->a;
    while (node)
    {
        ft_printf("%d %d\n", node->value, node->index);
        node = node->next;
    }
}
