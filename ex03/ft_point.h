/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@42singapore.sg>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 13:19:30 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/15 17:19:15 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// need to create a typedef struct for t_point
// normal struct won't work since the declaration only uses the t_point
// alias directly when declaring a new t_point datatype var.
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

#endif
