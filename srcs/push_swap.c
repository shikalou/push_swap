/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:54:14 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/24 16:32:28 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i++] != NULL)
		;
	return (i);
}

int	main(int argc, char **argv)
{
	int		argc_f;
	char	**argv_f;

	argv_f = argv + 1;
	argc_f = argc - 1;
	if (argc == 2)
	{
		argv_f = ft_split(argv[1], ' ');
		argc_f = ft_get_tablen(argv_f);
	}
	if (!ft_check_args(argc_f, argv_f))
	{
		if (argc == 2)
			ft_free(argv_f, argc_f);
		ft_putendl_fd("Error", 2);
		return (1);
	}
	printf("yohoho\n");
	if (argc == 2)
		ft_free(argv_f, argc_f);
	return (0);
}
