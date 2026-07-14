/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@42singapore.sg>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:19:30 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/14 13:35:54 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// need to create a typedef struct for t_point
// normal struct won't work since the declaration only uses the t_point
// alias directly when declaring a new t_point datatype var.

typedef struct t_point
{
	int	x;
	int	y;
}	t_point;
