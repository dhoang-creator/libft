/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:26:52 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/20 19:37:25 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_overlap(char *dst, const	char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		if (src + i == dst)
			return (1);
		i++;
	}
	return (0);
}

static	void	ft_backwards(char *dst, const char *src, size_t len)
{
	src += len - 1;
	dst += len - 1;
	while (len)
	{
		*dst = *src;
		dst--;
		src--;
		len--;
	}
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (ft_overlap((char *)dst, (const char *)src, len))
		ft_backwards((char *)dst, (const char *)src, len);
	else
	{
		while (len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
			len--;
		}
	}
	return (dst);
}
