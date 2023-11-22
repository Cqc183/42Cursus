/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:16:14 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:16:14 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The strrchr() function locates the last occurrence of c (converted to a
char) in the string s.  If c is `\0', strrchr() locates the terminating
`\0'.
*/

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    const char *ini;

    ini = s;
    i = ft_strlen(s);
    s = (s + i);
    while (*s != *ini && c != *s)
        s--;
    if (c == *s)
        return ((char *)s);
    return (0);
}
