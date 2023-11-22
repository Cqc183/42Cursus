/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:55:29 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:55:29 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
Outputs the string ’s’ to stdout, followed by a newline.
*/

#include "libft.h"

void	ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}