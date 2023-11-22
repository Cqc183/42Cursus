/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:46:07 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 09:46:07 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 DESCRIPTION:
The isdigit() function tests for a decimal digit character.
*/

int    ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
