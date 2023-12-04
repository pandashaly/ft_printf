/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:08:02 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/04 16:15:30 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_formatcon(const char *str, va_list args)
{
	if (str == 'c')
		return (ft_putchar(va_arg(ptr, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(ptr, char *)));
	else if (str == 'p')
		return (ft_putptr(va_arg(ptr, unsigned long long)));
	else if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (str == 'u')
		return (ft_putnbrun(va_arg(ptr, unsigned int)));
	else if (str == 'x')
		return (ft_putlohex(va_arg(ptr, unsigned int)));
	else if (str == 'X')
		return (ft_putuphex(va_are(ptr, unsigned int)));
	else if (str == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}
