/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:39:59 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/11 15:39:21 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*sptr;

	sptr = (char *)s;
	len = ft_strlen(sptr);
	while (len >= 0)
	{
		if (sptr[len] != c)
		{
			len--;
		}
		else if (sptr[len] == c)
			return (&sptr[len]);
	}
	return (NULL);
}
