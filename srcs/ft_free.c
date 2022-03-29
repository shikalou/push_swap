/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:14:58 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/29 18:17:22 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_struct(t_tabs *ratatab)
{
	free(ratatab->tab_a);
	free(ratatab->tab_b);
	free(ratatab);
}
