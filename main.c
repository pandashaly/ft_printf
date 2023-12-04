/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:24:15 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/04 20:08:58 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{
	int	age;

	age = 25;
	ft_printf("My name is %s and I am %d years old.\n", "Shaly", age);
	ft_printf("%s %s\n", "Today is", __DATE__);
	ft_printf("%s %s\n", "The time is" __TIME__);

	printf("%c \n", 'a');
	printf("%s \n", "abc");
	printf("%p \n", (void *)42);
	printf("%d %i \n", 42, 42);
	printf("%u \n", 42);
	printf("%x %X \n", 42, 42);
	printf("%% \n\n");

	ft_printf("%c \n", 'a');
	ft_printf("%s \n", "abc");
	ft_printf("%p \n", (void *)42);
	ft_printf("%d %i \n", 42, 42);
	ft_printf("%u \n", 42);
	ft_printf("%x %X \n", 42, 42);
	ft_printf("%% \n");
	return (0);
}
