/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 17:12:55 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/14 19:50:00 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	count;
	char	*dst;

	i = 0;
	count = ft_strlen(s1);
	dst = malloc(sizeof(char) * (count + 1));
	if (dst == NULL)
		return (NULL);
	while (i < count && count)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
