/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:54:14 by ldinaut           #+#    #+#             */
/*   Updated: 2022/04/04 17:34:07 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_argc_f(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i] != NULL)
		;
	return (i);
}

int	tab_is_sorted(t_tabs *ratatab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ratatab->len_a - 1)
	{
		j = i + 1;
		if (ratatab->tab_a[i] < ratatab->tab_a[j])
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_all_sort(t_tabs *rata, int argc, int argc_f, char **argv_f)
{
	if (argc == 2)
		ft_free(argv_f, argc_f);
	if (tab_is_sorted(rata))
		return ;
	if (argc_f == 2)
		ft_sort2(rata);
	else if (argc_f == 3)
		ft_sort3(rata);
	else if (argc_f < 6)
		ft_sort5(rata, argc_f);
	else
		ft_radix(rata);
}

int	main(int argc, char **argv)
{
	int		argc_f;
	char	**argv_f;
	t_tabs	*ratatab;

	argv_f = argv + 1;
	argc_f = argc - 1;
	if (argc == 2)
	{
		argv_f = ft_split(argv[1], ' ');
		argc_f = ft_get_argc_f(argv_f);
	}
	if (!ft_check_args(argc_f, argv_f))
	{
		if (argc == 2)
			ft_free(argv_f, argc_f);
		ft_putendl_fd("Error", 2);
		return (1);
	}
	ratatab = ft_init_struct(argc_f, argv_f);
	ft_all_sort(ratatab, argc, argc_f, argv_f);
	ft_free_struct(ratatab);
	return (0);
}
