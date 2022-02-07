/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/19 17:14:45 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/20 19:27:44 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char		*ft_fill(char *str, long x, int j)
{
	long	i;

	i = 0;
	if (x < 0)
	{
		str[0] = '-';
		x *= -1;
	}
	while (x)
	{
		i = x;
		i %= 10;
		j--;
		str[j] = i + '0';
		x /= 10;
	}
	return (str);
}

static	int			ft_count(int i)
{
	int j;

	j = 0;
	if (i <= 0)
		j = 1;
	while (i)
	{
		i = i / 10;
		j++;
	}
	return (j);
}

char				*ft_itoa(int n)
{
	long	k;
	int		j;
	char	*str;

	j = ft_count(n);
	k = (long)n;
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (str == NULL)
		return (NULL);
	if (k == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str[j] = '\0';
	return (ft_fill(str, k, j));
}
