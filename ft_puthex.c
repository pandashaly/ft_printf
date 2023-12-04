/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:44:39 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/04 22:06:18 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(long n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_puthex(unsigned int n, char c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex(n / 16, c);
	ft_putchar(base[n % 16]);
}

int	main(void)
{
	unsigned int	n;
	char	c;

	n = 4096;
	c = 'f';
	ft_puthex(n, c);
	printf("\n");
	return (0);
}
