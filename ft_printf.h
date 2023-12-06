/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:00:08 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/06 05:46:43 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h> 

int		ft_printf(const char *arg, ...);
int		ft_format(const char *str, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_printstr(char *s);
int		ft_putptr(uintptr_t n);
int		ft_putnbrbase(unsigned long n, int base, char *c);
int		ft_puthex(unsigned int n, char c);
int		ft_putnbr(long n);




#endif
