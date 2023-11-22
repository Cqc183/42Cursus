/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:06:45 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 10:06:45 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The memmove() function copies n bytes from string s2 to string s1.  The
two strings may overlap; the copy is always done in a non-destructive
manner.
*/

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    if (!dst && !src)
        return (0);
    i = 0;
    if ((size_t)dst - (size_t)src < len)
    {
        i = len - 1;
        while (i < len)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i--;
        }
    }
    else
    {
        while (i < len)
        {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dst);
}