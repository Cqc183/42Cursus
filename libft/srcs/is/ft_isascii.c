/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:48:36 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 09:48:36 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The isascii() function tests for an ASCII character, which is any
character between 0 and octal 0177 inclusive.
*/

int    ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}
