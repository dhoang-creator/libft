/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:37:57 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/07 19:59:03 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_fd_str(const char *str, const char *f, size_t len)
{
	if (!(*f))
		return (1);
	if (!len)
		return (0);
	if (!(*str) && *f)
		return (0);
	if (*str == *f)
		return (ft_fd_str(str + 1, f + 1, len - 1));
	return (0);
}

char			*ft_strnstr(const char *haystack,
								const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (i < len)
	{
		if (*(haystack + i) && *(haystack + i) == *needle)
			if (ft_fd_str(haystack + i, needle, len - i))
				return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
