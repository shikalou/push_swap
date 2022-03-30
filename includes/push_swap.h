/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldinaut <ldinaut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:54:32 by ldinaut           #+#    #+#             */
/*   Updated: 2022/03/30 17:29:18 by ldinaut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <unistd.h>

typedef struct s_tabs
{
	int	*tab_a;
	int	len_a;
	int	*tab_b;
	int	len_b;
}	t_tabs;

t_tabs	*ft_init_struct(int argc_f, char **argv_f);

int			ft_check_args(int argc, char **argv);
int			ft_check_num(char *num);
int			ft_check_double(int tab[], int argc);
int			ft_get_argc_f(char **tab);
int			tab_is_sorted(t_tabs *ratatab);

int			*ft_fill_tab_a(int argc_f, char **argv_f);

long int	ft_atol(const char *str);

void		sa(t_tabs *ratatab);
void		sb(t_tabs *ratatab);
void		pa(t_tabs *ratatab);
void		pb(t_tabs *ratatab);
void		ra(t_tabs *ratatab);
void		rb(t_tabs *ratatab);
void		rra(t_tabs *ratatab);
void		rrb(t_tabs *ratatab);
void		ft_free_struct(t_tabs *ratatab);

#endif
