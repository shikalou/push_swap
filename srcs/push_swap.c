/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:54:14 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/31 18:21:17 by ldinaut          ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int		argc_f;
	char	**argv_f;
	t_tabs	*ratatab;
	int		i = 0;
	int		j = 0;

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
	if (argc == 2)
		ft_free(argv_f, argc_f);
	while (i < argc_f)
	{
		printf("tab_a[%d] = %d\n", i, ratatab->tab_a[i]);
		i++;
	}
	if (tab_is_sorted(ratatab))
	{
		ft_free_struct(ratatab);
		return (0);
	}
	if (argc_f == 2)
		ft_sort2(ratatab);
	else if (argc_f == 3)
		ft_sort3(ratatab);
	else if (argc_f < 6)
		ft_sort5(ratatab, argc_f);
	while (j < ratatab->len_b)
	{
		printf("tab_b[%d] = %d\n", j, ratatab->tab_b[j]);
		j++;
	}
	i = 0;
	printf("\n");
	while (i < ratatab->len_a)
	{
		printf("tab_a[%d] = %d\n", i, ratatab->tab_a[i]);
		i++;
	}
	ft_free_struct(ratatab);
	return (0);
}
