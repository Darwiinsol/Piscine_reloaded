/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:01:53 by apissier          #+#    #+#             */
/*   Updated: 2016/11/16 18:14:32 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

int			main(int argc, char **argv)
{
	int cm;
	int cl;

	cm = 1;
	while (cm < argc)
	{
		cl = 0;
		while (argv[cm][cl])
		{
			ft_putchar(argv[cm][cl]);
			cl++;
		}
		cm++;
		ft_putchar('\n');
	}
	return (0);
}
