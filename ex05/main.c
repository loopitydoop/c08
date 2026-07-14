/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 16:01:02 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/14 18:22:22 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <stdio.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char	*str_arr[4] = {"What", "is", "up", "homies"};
	t_stock_str	*strct_arr;
	int	i;
	int	arr_size;

	i = 0;
	arr_size = sizeof (str_arr) / sizeof (str_arr[0]);
	printf("elements of the string array are:\n");
	while (i < arr_size)
	{
		printf("%s, ", str_arr[i]);
		i++;
	}
	printf("\n");
	printf("creating struct array from the string array\n");
	strct_arr = ft_strs_to_tab(arr_size, str_arr);
	printf("Displaying the struct arr with ft_show_tab(strct_arr)\n");
	ft_show_tab(strct_arr);
	return (0);
}
