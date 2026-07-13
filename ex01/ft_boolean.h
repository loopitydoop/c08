/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 16:34:58 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/13 19:17:44 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_boolean.h should contain all the constants needed for the main to run
// these are:
// t_bool struct
// write()
// EVEN() // this is a macro, kind of like a function, but no curly braces
// TRUE
// FALSE
// EVEN_MSG
// ODD_MSG
// SUCCESS

// generally, it seems like when defining stuff, you don't use the 
// assignment operator '=', you just leave a space
// MACROS work on placeholders, e.g. EVEN(nbr) (nbr % 2 == 0) works on
// whatever you put in EVEN(). I.e. you can EVEN(something) and it will replace
// EVEN(something) with (something % 2 == 0). Kinda cool.

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define EVEN(nbr) (nbr % 2 == 0)

# define TRUE 1
# define FALSE 0

# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

# define SUCCESS 0

#endif
