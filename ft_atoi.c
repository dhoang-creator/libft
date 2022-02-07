/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dhoang <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:25:57 by dhoang        #+#    #+#                 */
/*   Updated: 2019/11/24 15:30:00 by dhoang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_convert(const char *str, int neg)
{
	int i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num && LONG_MAX / num == 10)
			return (num * 10 + (str[i] - 48));
		if (num && LONG_MAX / num < 10 && neg == -1)
			return (0);
		if (num && LONG_MAX / num < 10 && neg == 1)
			return (-1);
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

int				ft_atoi(const char *str)
{
	int i;
	int neg;

	i = 0;
	neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	return (ft_convert(str + i, neg));
}
