/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:54:32 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/24 16:34:08 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <unistd.h>

int			ft_check_args(int argc, char **argv);
int			ft_check_num(char *num);
int			ft_check_double(int tab[], int argc);
int			ft_get_tablen(char **tab);

long int	ft_atol(const char *str);

#endif