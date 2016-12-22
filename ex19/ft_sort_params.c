/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:25:29 by apissier          #+#    #+#             */
/*   Updated: 2016/11/22 16:43:19 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_printparams(char **str, int n)
{
	int i;

	i = 1;
	while (i < n)
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int			main(int argc, char **argv)
{
	char	*tmp;
	int		count;
	int		word;

	count = 1;
	while (count)
	{
		count = 0;
		word = 1;
		while (word < argc - 1)
		{
			if (ft_strcmp(argv[word], argv[word + 1]) > 0)
			{
				tmp = argv[word];
				argv[word] = argv[word + 1];
				argv[word + 1] = tmp;
				count++;
			}
			word++;
		}
	}
	ft_printparams(argv, argc);
	return (0);
}
