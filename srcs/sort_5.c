/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:20:33 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/31 17:51:23 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_tabs *rata)
{
	int	i;
	int	j;
	int	j_p;

	i = 1;
	j = rata->tab_a[0];
	j_p = 0;
	while (i < rata->len_a)
	{
		if (j > rata->tab_a[i])
		{
			j_p = i;
			j = rata->tab_a[i];
		}
		i++;
	}
	return (j_p);
}

void	sort_n_pb(t_tabs *rata)
{
	int	min;

	min = ft_find_min(rata);
	if (min <= rata->len_a / 2)
	{
		while (min > 0)
		{
			ra(rata);
			min--;
		}
	}
	else
	{
		while (min < rata->len_a)
		{
			rra(rata);
			min++;
		}
	}
	pb(rata);
}

void	ft_sort5(t_tabs *rata, int argc_f)
{
	if (argc_f == 5)
		sort_n_pb(rata);
	sort_n_pb(rata);
	ft_sort3(rata);
	if (argc_f == 5)
		pa(rata);
	pa(rata);
}
