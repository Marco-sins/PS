/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:48:11 by mmembril          #+#    #+#             */
/*   Updated: 2025/05/23 10:15:59 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_type(char c, va_list args);
int	ft_putchar_fd_f(char c, int fd);
int	ft_putnbr_fd_f(int n, int fd);
int	ft_putstr_fd_f(char *s, int fd);
int	ft_printhex(unsigned long long num, char *base, int fd);
int	ft_cont_numbers(int i);
int	ft_putchar_fd2(char c, int fd);
int	ft_get_ptr(unsigned long long i, int fd);

#endif
