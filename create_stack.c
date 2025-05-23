/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 09:35:45 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/23 13:47:45 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *init_stack(void)
{
    t_stack *pila;
    
    pila = (t_stack *)malloc(sizeof(t_stack));
    if (!pila)
        return (0);
    pila->a = NULL;
    pila->b = NULL;
    return (pila);
}

int check_av(int ac, char **av)
{
    int i;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if (!ft_isdigit(av[1][i]) && av[1][i] != ' ')
                return (0);
            i++;
        }
    }
    else
    {
        i = 1;
        while (av[i])
        {
            if (!ft_isnumber(av[i]))
                return (0);
            i++;
        }
    }
    return (1);
}

char **ft_complete(int ac, char **av)
{
    char **str;
    int i;

    str = (char **)ft_calloc(sizeof(char *), ac);
    if (!str)
        return (NULL);
    i = 0;
    while (i < ac - 2)
    {
        str[i] = av[i + 1];
        i++;
    }
    str[i] = "\0";
    return (str);
}

t_node *create_node(int value)
{
    t_node *node;

    node = malloc(sizeof(t_node));
    if (!node)
        return (0);
    node->value = value;
    node->next = NULL;
    return (node);
}

void connect_node(t_stack *pila, char **str)
{
    t_node *node;
    t_node *new;
    int i;

    i = 0;
    while (str[i])
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