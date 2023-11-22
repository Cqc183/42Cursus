/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:22:54 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:22:54 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The strdup() function allocates sufficient memory for a copy of the
string s1, does the copy, and returns a pointer to it.  The pointer may
subsequently be used as an argument to the function free(3).
*/

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *s2;

    if (!(s2 = (char *)malloc(ft_strlen(s1) + 1)))
        return (0);
    ft_memcpy(s2, s1, ft_strlen(s1) + 1);
    return (s2);
}