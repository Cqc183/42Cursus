/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:24:50 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:24:50 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The toupper() function converts a lower-case letter to the corresponding
upper-case letter.
*/

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    return (c);
}