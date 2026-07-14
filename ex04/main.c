/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 16:01:02 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/14 16:36:13 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <stdio.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

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
	printf("Printing out the elements of the strct array:\n");
	i = 0;
	while (strct_arr[i].str != 0)
	{
		printf("size: %i, str: \"%s\", copy: \"%s\"\n",
			strct_arr[i].size, strct_arr[i].str,
			strct_arr[i].copy);
		i++;
	}
	return (0);
}
