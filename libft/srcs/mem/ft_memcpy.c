/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:03:32 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 10:03:32 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The memcpy() function copies n bytes from memory area s2 to memory area
s1.  If s1 and s2 overlap, behavior is undefined.  Applications in which
s1 and s2 might overlap should use memmove(3) instead.
*/

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    if (!dst && !src)
        return (0);
    i = 0;
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dst);
}
