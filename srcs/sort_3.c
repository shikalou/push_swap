/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:50:24 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/30 18:08:21 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_tabs *ratatab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	if (ratatab->tab_a[i] > ratatab->tab_a[j])
		sa(ratatab);
}
