/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:56:28 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/14 18:25:43 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <unistd.h>

void	sk_print_int(int nb);

void	sk_print_str(char *str);

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		sk_print_str(par->str);
		write(1, "\n", 1);
		sk_print_int(par->size);
		write(1, "\n", 1);
		sk_print_str(par->copy);
		write(1, "\n", 1);
		par++;
	}
}

void	sk_print_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	sk_print_int(int nb)
{
	char	c;

	if (nb > 9)
		sk_print_int(nb / 10);
	c = nb + '0';
	write(1, &c, 1);
}
