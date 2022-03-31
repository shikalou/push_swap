/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:25:15 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/31 14:43:07 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_tabs *ratatab)
{
	int	temp;
	int	i;

	i = 0;
	if (ratatab->len_a == 0)
		return ;
	temp = ratatab->tab_a[i];
	while (i < ratatab->len_a - 1)
	{
		ratatab->tab_a[i] = ratatab->tab_a[i + 1];
		i++;
	}
	ratatab->tab_a[i] = temp;
	ft_putendl_fd("ra", 1);
}

void	rb(t_tabs *ratatab)
{
	int	temp;
	int	i;

	i = 0;
	if (ratatab->len_b == 0)
		return ;
	temp = ratatab->tab_b[i];
	while (i < ratatab->len_b - 1)
	{
		ratatab->tab_b[i] = ratatab->tab_b[i + 1];
		i++;
	}
	ratatab->tab_b[i] = temp;
	ft_putendl_fd("rb", 1);
}

void	rra(t_tabs *ratatab)
{
	int	temp;
	int	i;

	if (ratatab->len_a == 0)
		return ;
	i = ratatab->len_a - 1;
	temp = ratatab->tab_a[i];
	while (i > 0)
	{
		ratatab->tab_a[i] = ratatab->tab_a[i - 1];
		i--;
	}
	ratatab->tab_a[i] = temp;
	ft_putendl_fd("rra", 1);
}

void	rrb(t_tabs *ratatab)
{
	int	temp;
	int	i;

	if (ratatab->len_b == 0)
		return ;
	i = ratatab->len_b - 1;
	temp = ratatab->tab_b[i];
	while (i > 0)
	{
		ratatab->tab_b[i] = ratatab->tab_b[i - 1];
		i--;
	}
	ratatab->tab_b[i] = temp;
	ft_putendl_fd("rrb", 1);
}
