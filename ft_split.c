/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 08:26:41 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/20 19:33:20 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*free_space(char **result, size_t n_ptr)
{
	size_t	i;

	i = 0;
	while (i < n_ptr && result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

static	char	*ft_create_words(char const *s, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = ((char *)malloc((i + 1) * sizeof(char)));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	char	**ft_create_result(const char *s, size_t n_ptr,
									char c, size_t i)
{
	size_t	j;
	char	**result;

	j = 0;
	result = malloc((n_ptr + 1) * sizeof(char*));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			result[j] = ft_create_words(s + i, c);
		else
			break ;
		if (result[j] == NULL)
			free_space(result, n_ptr);
		while (s[i] != '\0' && s[i] != c)
			i++;
		j++;
	}
	result[j] = NULL;
	return (result);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	n_ptr;

	if (!s)
		return (NULL);
	i = 0;
	n_ptr = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (n_ptr < SIZE_MAX)
		{
			if (s[i])
				n_ptr++;
		}
		else
			return (NULL);
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (ft_create_result(s, n_ptr, c, 0));
}
