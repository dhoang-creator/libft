/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:32:14 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/05 19:49:40 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*d1;

	s1 = (unsigned char *)src;
	d1 = (unsigned char *)dst;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (n)
	{
		d1[i] = s1[i];
		i++;
		n--;
	}
	return (dst);
}
