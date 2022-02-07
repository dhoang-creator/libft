/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:18:12 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/25 15:52:59 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sptr;

	i = 0;
	sptr = (unsigned char *)s;
	while (n)
	{
		if (sptr[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
		n--;
	}
	return (NULL);
}
