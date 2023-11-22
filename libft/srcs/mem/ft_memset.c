/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:54:26 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 09:54:26 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The memset() function writes n bytes of value c (converted to an
unsigned char) to the string s.
*/

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return (b);
}