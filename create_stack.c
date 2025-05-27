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

t_stack *init_stack(int ac)
{
    t_stack *pila;
    
    pila = (t_stack *)malloc(sizeof(t_stack));
    if (!pila)
        return (0);
    pila->a = NULL;
    pila->b = NULL;
    pila->args = ac;
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
            if (!ft_isdigit(av[1][i]) && av[1][i] != ' ' && av[1][i] != '-' && av[1][i] != '+')
                return (FALSE);
            i++;
        }
    }
    else if (ac > 2)
    {
        i = 1;
        while (av[i])
        {
            if (!ft_isnumber(av[i]))
                return (FALSE);
            i++;
        }
    }
    else
        return (FALSE);
    return (TRUE);
}

char **ft_complete(int ac, char **av)
{
    char **str;
    int i;

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
