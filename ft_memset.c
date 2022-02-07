/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:34:03 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/05 19:52:35 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	index;

	index = 0;
	while (len)
	{
		((unsigned char *)b)[index] = (unsigned char)c;
		index++;
		len--;
	}
	return (b);
}
