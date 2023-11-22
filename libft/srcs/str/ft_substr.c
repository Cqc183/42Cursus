/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:30:05 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:30:05 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new_str;
    size_t i;
    size_t j;

    if (!s || !(new_str = (char *)malloc(len + 1)))
        return (0);
    i = start;
    j = 0;
    while (i < ft_strlen(s) && j < len)
        new_str[j++] = s[i++];
    new_str[j] = '\0';
    return (new_str);
}