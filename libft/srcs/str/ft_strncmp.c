/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:17:44 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:17:44 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The strcmp() and strncmp() functions lexicographically compare the null-
terminated strings s1 and s2.
The strncmp() function compares not more than n characters.  Because
strncmp() is designed for comparing strings rather than binary data,
characters that appear after a `\0' character are not compared.
*/

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    if (n == 0)
        return (0);
    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        if (i < (n - 1))
            i++;
        else
            return (0);
    }
    return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}