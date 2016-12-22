/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:58:32 by apissier          #+#    #+#             */
/*   Updated: 2016/11/22 16:09:27 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	if (max > min)
	{
		tab = (int *)malloc(sizeof(int) * (max - min));
		if (tab == NULL)
			return (0);
		while (max > min)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
	}
	return (0);
}
