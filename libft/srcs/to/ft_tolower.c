/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:25:38 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:25:38 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The tolower() function converts an upper-case letter to the
corresponding lower-case letter.
*/

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    return (c);
}