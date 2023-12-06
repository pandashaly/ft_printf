/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:08:02 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/06 05:50:04 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_format(const char *str, va_list args)
{
	if (*str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*str == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (*str == 'p')
		return (ft_putptr(va_arg(args, uintptr_t)));
	else if (*str == 'd' || *str == 'i')
		return (ft_putnbr(va_arg(args, long)));
	else if (*str == 'u')
		return (ft_putnbr(va_arg(args, long)));
	else if (*str == 'x')
		return (ft_putnbrbase(va_arg(args, unsigned int), 16, "0123456789abcdef"));
	else if (*str == 'X')
		return (ft_putnbrbase(va_arg(args, unsigned int), 16, "0123456789ABCDEF"));
	else if (*str == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *arg, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, arg);
	count = 0;
	while (*arg != '\0')
	{
		if (*arg == '%')
			count += ft_format(++arg, ap);
		else
			count += write(1, arg, 1);
		++arg;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	ft_printf("hello i am %s !\n", "Shaly");
//	ft_printf();
//	ft_printf();
//	ft_printf();
//	ft_printf();
//	ft_printf();
//	ft_printf();
//	ft_printf();
//	ft_printf();
//	ft_printf();
//	ft_printf();
	return (0);
}
