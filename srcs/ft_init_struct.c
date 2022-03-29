/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:52:40 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/29 15:19:18 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_fill_tab_a(int argc_f, char **argv_f)
{
	int	*tab_a;
	int	i;

	i = 0;
	tab_a = malloc(sizeof(int) * argc_f);
	if (!tab_a)
		return (0);
	while (i < argc_f)
	{
		tab_a[i] = ft_atoi(argv_f[i]);
		i++;
	}
	return (tab_a);
}

t_tabs	*ft_init_struct(int argc_f, char **argv_f)
{
	t_tabs	*ratatab;

	ratatab = malloc(sizeof(t_tabs));
	ratatab->tab_a = ft_fill_tab_a(argc_f, argv_f);
	ratatab->tab_b = malloc(sizeof(int) * argc_f);
	return (ratatab);
}
