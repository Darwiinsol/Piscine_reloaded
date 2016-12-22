/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:00:42 by apissier          #+#    #+#             */
/*   Updated: 2016/11/21 17:01:36 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void		set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int			main(void)
{
	t_point						point;
	set_point(&point);
	return (0);
}
