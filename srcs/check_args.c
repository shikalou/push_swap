/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:51:57 by ldinaut           #+#    #+#             */
/*   Updated: 2022/04/04 17:43:48 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atol(const char *str)
{
	int				i;
	int				sign;
	long long int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && nb < 2147483648)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}

int	ft_check_double(int tab[], int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_num(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-' || num[i] == '+')
		i++;
	while (num[i] != '\0')
	{
		if (ft_isdigit(num[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_all_check_num(int *tab, char **argv)
{
	int			i;
	int			j;
	long int	nb;

	j = -1;
	i = -1;
	while (argv[++i])
	{
		if (!ft_check_num(argv[i]))
			return (0);
		nb = ft_atol(argv[i]);
		if (nb > 2147483647 || nb < -2147483648)
			return (0);
		tab[++j] = nb;
	}
	return (1);
}

int	ft_check_args(int argc, char **argv)
{
	int			*tab;

	tab = malloc(sizeof(int) * argc);
	if (!tab)
		return (0);
	if (!ft_all_check_num(tab, argv))
	{
		free(tab);
		return (0);
	}
	if (!ft_check_double(tab, argc))
	{
		free(tab);
		return (0);
	}
	free(tab);
	return (1);
}
