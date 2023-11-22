/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:08:06 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 10:08:06 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The memchr() function locates the first occurrence of c (converted to an
unsigned char) in string s.
*/

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)(s + i));
        i++;
    }
    return (0);
}