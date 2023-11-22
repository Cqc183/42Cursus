/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:14:39 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 19:14:39 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
Swaps the value of two integers whose addresses are entered as
parameters.
*/

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}