/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 20:49:33 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/24 14:56:09 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_copy(char *sub, char const *s, size_t size, size_t len)
{
	size_t	i;

	i = 0;
	while (size && len)
	{
		sub[i] = s[i];
		i++;
		size--;
		len--;
	}
	sub[i] = '\0';
}

static	size_t	ft_length(char const *s, size_t len)
{
	size_t	i;

	i = 0;
	while (s[i] && len)
	{
		i++;
		len--;
	}
	return (i);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;

	if (!s)
		return (NULL);
	if (!len || s[0] == '\0')
		return (ft_strdup(""));
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	size = ft_length(s + start, len);
	sub = (char *)malloc(sizeof(char) * (size + 1));
	if (sub == NULL)
		return (NULL);
	ft_copy(sub, s + start, size, len);
	return (sub);
}
