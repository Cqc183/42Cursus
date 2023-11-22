/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:47:31 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 09:47:31 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isalnum() function tests for any character for which isalpha(3) or
isdigit(3) is true.
*/

int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
        (c >= '0' && c <= '9'))
        return (1);
    return (0);
}