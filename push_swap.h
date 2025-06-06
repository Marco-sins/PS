/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:33:26 by marco             #+#    #+#             */
/*   Updated: 2025/05/28 13:33:26 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdint.h>
# include <limits.h>

# define TRUE 1
# define FALSE 0

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}			t_node;

typedef struct s_stack
{
	t_node	*a;
	t_node	*b;
}		t_stack;

void	connect_node(t_stack *pila, char **str);
t_node	*create_node(int value);
char	**ft_complete(int ac, char **av);
int		check_av(char **av);
t_stack	*init_stack(void);
void	free_all(t_stack *pila, char **str);
void	free_str(char **str);
void	ft_error(char *str, t_stack *pila);
int		ft_isnumber(const char *str);
void	free_stack(t_stack *pila);
void	pa(t_stack *pila);
void	pb(t_stack *pila);
void	sa(t_stack *pila, int p);
void	sb(t_stack *pila, int p);
void	ss(t_stack *pila);
void	ra(t_stack *pila, int p);
void	rb(t_stack *pila, int p);
void	rr(t_stack *pila);
void	rra(t_stack *pila, int p);
void	rrb(t_stack *pila, int p);
void	rrr(t_stack *pila);
void	push_swap(t_stack *pila);
int		ft_stack_len(t_node *node);
void	sort_two(t_stack *pila);
void	sort_three(t_stack *pila);
void	sort_four(t_stack *pila);
void	sort_five(t_stack *pila);
int		is_sorted(t_node *node);
void	ft_preorder(t_stack *pila, int len);
void	ft_order_array(int *array, int len);
void	ft_set_index(t_stack *pila, int *array, int len);
void	radix_sort(t_stack *pila);
int		check_equals(t_stack *pila);

#endif
