/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 10:58:07 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/24 14:43:57 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t j;
	size_t n;

	j = 0;
	len = 0;
	n = 0;
	while (dst[len] != '\0')
		len++;
	while (src[n] != '\0')
		n++;
	if (dstsize <= len)
		n += dstsize;
	else
		n += len;
	while (src[j] != '\0' && len < dstsize - 1 && dstsize)
	{
		dst[len] = src[j];
		len++;
		j++;
	}
	if (dstsize)
		dst[len] = '\0';
	return (n);
}
