/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:58:23 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 09:58:23 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The bzero() function writes n zeroed bytes to the string s. If n is
zero, bzero() does nothing.
*/

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}
