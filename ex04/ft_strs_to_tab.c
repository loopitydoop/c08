/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:45:38 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/14 17:51:09 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// output is an ARRAY of struct s_stock_str aka t_stock_str.
/*iterate through each string in av
	get the string's pointer, write it to the struct somehow.
	iterate through each char in each string.
		simultaneously, count the length of the string, and make a
		copy of the string
*/

#include "ft_stock_str.h"

#include <stdlib.h> // for malloc, free()

int		str_to_strct(char *str, t_stock_str *dest);

int		sk_strlen(char *str);

void	sk_strcpy(char *dest, char *src);

void	cleanup_arr(t_stock_str *strct_arr, int i);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strct_arr;
	int			i;

	strct_arr = malloc(sizeof (t_stock_str) * (ac + 1));
	if (strct_arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (str_to_strct(av[i], (strct_arr + i)) != 1)
		{
			cleanup_arr(strct_arr, (i - 1));
			free(strct_arr);
			return (NULL);
		}
		i++;
	}
	strct_arr[i].size = 0;
	strct_arr[i].str = 0;
	strct_arr[i].copy = 0;
	return (strct_arr);
}

int	str_to_strct(char *str, t_stock_str *dest)
{
	dest->size = sk_strlen(str);
	dest->str = malloc(dest->size + 1);
	if (dest->str == NULL)
		return (0);
	sk_strcpy(dest->str, str);
	dest->copy = malloc(dest->size + 1);
	if (dest->copy == NULL)
	{
		free(dest->str);
		return (0);
	}
	sk_strcpy(dest->copy, str);
	return (1);
}

int	sk_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	sk_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

// this basically frees up memory in the strct_arr if any malloc errors occur
// it works by decrementing i to work through the arr in reverse,
void	cleanup_arr(t_stock_str *strct_arr, int i)
{
	while (i >= 0)
	{
		free(strct_arr[i].str);
		free(strct_arr[i].copy);
		i--;
	}
}
