/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:17:45 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 10:17:45 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The memcmp() function compares byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.
*/

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return (0);
}