/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:54:20 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:54:20 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
Outputs the string ’s’ to stdout.
*/

#include "libft.h"

void	ft_putstr(char *s)
{
	int i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}