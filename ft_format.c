/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:08:02 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/02 20:21:59 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_formatcon(const char *str, va_list ptr)
{
	int	i;

	i = 0;
	if (str == 'c')
		i += ft_putchar(va_arg(ptr, int));
	if (str == 's')
		i += ft_putstr(va_arg(ptr, char *));
	if (str == 'p')
		i += ft_putptr(va_arg(ptr, unsigned long long));
	if (str == 'd' || str == 'i')
		i += ft_putnbr(va_arg(ptr, int));
	if (str == 'u')
		i += ft_putnbrun(va_arg(ptr, unsigned int));
	if (str == 'x')
		i += ft_putlohex(va_arg(ptr, unsigned int));
	if (str == 'X')
		i += ft_putuphex(va_are(ptr, unsigned int));
	if (str == '%')
		i += ft_putchar('%');
	return (i);
}
