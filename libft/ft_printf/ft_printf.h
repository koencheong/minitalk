/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheong <kcheong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:59:37 by kcheong           #+#    #+#             */
/*   Updated: 2022/07/04 20:49:48 by kcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putnbr(int n, int *nbr);
int		ft_printf(const char *str, ...);
void	ft_unsigned_int(unsigned int n, int *nbr);
void	ft_ptr(unsigned long n, int *nbr);
void	ft_hex(unsigned int n, int *nbr);
void	ft_upperhex(unsigned int n, int *nbr);

#endif