/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:50:24 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/31 17:32:01 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort2(t_tabs *rata)
{
	if (rata->tab_a[0] > rata->tab_a[1])
		sa(rata);
}

void	ft_sort3(t_tabs *rata)
{
	if ((rata->tab_a[0] > rata->tab_a[1] && rata->tab_a[1] > rata->tab_a[2])
		|| (rata->tab_a[0] < rata->tab_a[1] && rata->tab_a[1] > rata->tab_a[2]
			&& rata->tab_a[0] < rata->tab_a[2]))
		sa(rata);
	if (rata->tab_a[0] < rata->tab_a[1] && rata->tab_a[1] > rata->tab_a[2])
		rra(rata);
	else if (rata->tab_a[0] > rata->tab_a[2])
		ra(rata);
	else if (rata->tab_a[0] > rata->tab_a[1])
		sa(rata);
}
