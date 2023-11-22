/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:17:53 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 18:17:53 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The strlen() function computes the length of the string s.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}
