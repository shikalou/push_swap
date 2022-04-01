/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:11:22 by ldinaut           #+#    #+#             */
/*   Updated: 2022/04/01 19:30:48 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fake_bubble(int	*tab, t_tabs *rata)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < rata->len_a - 1)
	{
		j = i + 1;
		while (j < rata->len_a)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_make_pos(int	*fake, t_tabs *rata)
{
	int	i;
	int	j;

	i = 0;
	while (i < rata->len_a)
	{
		j = 0;
		while (j < rata->len_a && i < rata->len_a)
		{
			if (fake[j] == rata->tab_a[i])
			{
				rata->tab_a[i] = j;
				i++;
			}
			j++;
		}
	}
}

int	ft_count_bin(int n)
{
	int	i;

	i = 1;
	while (n >= 2)
	{
		i++;
		n = n / 2;
	}
	return (i);
}

void	ft_sort_radix(t_tabs *rata)
{
	int	i;
	int	j;
	int	k;
	int	l;

	j = rata->len_a;
	l = 0;
	k = ft_count_bin(ft_find_max(rata));
	while (l < k)
	{
		i = 0;
		while (i < j)
		{
			if ((rata->tab_a[0] >> l) % 2 == 0)
				pb(rata);
			else
				ra(rata);
			i++;
		}
		while (rata->len_b != 0)
			pa(rata);
		l++;
	}
}

void	ft_radix(t_tabs *rata)
{
	int	*fake;
	int	i;

	i = -1;
	fake = malloc(sizeof(int) * rata->len_a);
	if (!fake)
		return ;
	while (++i < rata->len_a)
		fake[i] = rata->tab_a[i];
	ft_fake_bubble(fake, rata);
	ft_make_pos(fake, rata);
	free(fake);
	ft_sort_radix(rata);
}
