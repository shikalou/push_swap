/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:45:54 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/31 13:09:46 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_tabs *ratatab)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ratatab->len_a < 2)
		return ;
	ft_putendl_fd("sa", 1);
	temp = ratatab->tab_a[i];
	ratatab->tab_a[i] = ratatab->tab_a[j];
	ratatab->tab_a[j] = temp;
}

void	sb(t_tabs *ratatab)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ratatab->len_b < 2)
		return ;
	ft_putendl_fd("sb", 1);
	temp = ratatab->tab_b[i];
	ratatab->tab_b[i] = ratatab->tab_b[j];
	ratatab->tab_b[j] = temp;
}

void	pa(t_tabs *ratatab)
{
	int	i;

	if (ratatab->len_b == 0)
		return ;
	ft_putendl_fd("pa", 1);
	i = ratatab->len_a;
	while (i > 0)
	{
		ratatab->tab_a[i] = ratatab->tab_a[i - 1];
		i--;
	}
	i = 0;
	ratatab->tab_a[i] = ratatab->tab_b[i];
	ratatab->len_b--;
	while (i < ratatab->len_b)
	{
		ratatab->tab_b[i] = ratatab->tab_b[i + 1];
		i++;
	}
	ratatab->len_a++;
}

void	pb(t_tabs *ratatab)
{
	int	i;

	if (ratatab->len_a == 0)
		return ;
	ft_putendl_fd("pb", 1);
	i = ratatab->len_b;
	while (i > 0)
	{
		ratatab->tab_b[i] = ratatab->tab_b[i - 1];
		i--;
	}
	i = 0;
	ratatab->tab_b[i] = ratatab->tab_a[i];
	ratatab->len_a--;
	while (i < ratatab->len_a)
	{
		ratatab->tab_a[i] = ratatab->tab_a[i + 1];
		i++;
	}
	ratatab->len_b++;
}
