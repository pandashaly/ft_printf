/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:24:15 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/07 13:49:35 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main(void)
{
	ft_printf("hello i am %s!!\n", "Shaly");
	ft_printf("%s %s\n", "Today is", __DATE__);
	ft_printf("%s \n", "abc");
	ft_printf("%s %s\n", "The time is", __TIME__);
	ft_printf("%c is for %s!\n", 'c', "Choombas");
	ft_printf("%c%c is for %d!\n", 'f', 't', 42);
	ft_printf("%d %i \n", 42, 42);
	ft_printf("%x %X \n", 42, 42);
	ft_printf("%% \n");
	ft_printf("%x \n", 31);
	ft_printf();
	ft_printf();
    return (0);
}
