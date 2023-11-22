/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:27:17 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:27:17 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The atoi() function converts the initial portion of the string pointed
to by str to int representation.
*/

int ft_atoi(const char *str)
{
    int i;
    int s;
    int res;

    i = 0;
    s = 1;
    res = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * s);
}