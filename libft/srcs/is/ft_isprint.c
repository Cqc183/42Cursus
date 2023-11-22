/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:50:02 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 09:50:02 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The isprint() function tests for any printing character, including space
(` ').
*/

int    ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}
