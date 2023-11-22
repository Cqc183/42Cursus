/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:24:10 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 10:24:10 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The calloc() function contiguously allocates enough space for count
objects that are size bytes of memory each and returns a pointer to the
allocated memory. The allocated memory is filled with bytes of value
zero.
*/

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    size_t tot_size;
    void *dst;

    tot_size = size * count;
    if (!(dst = malloc(tot_size)))
        return (0);
    ft_memset(dst, 0, tot_size);
    return (dst);
}