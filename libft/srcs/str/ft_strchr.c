/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chquinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:14:27 by chquinta          #+#    #+#             */
/*   Updated: 2023/11/22 17:14:27 by chquinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
The strchr() function locates the first occurrence of c (converted to a
char) in the string pointed to by s.  The terminating null character is
considered to be part of the string; therefore if c is `\0', the func-
tions locate the terminating `\0'.
*/

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && c != *s)
        s++;
    if (c == *s)
        return ((char *)s);
    return (0);
}