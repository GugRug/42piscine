/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <gumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 13:02:27 by gumartin          #+#    #+#             */
/*   Updated: 2019/12/12 13:53:38 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_char_tab(char **tab, int size)
{
	int		pass;
	int		i;
	char	*temp;

	i = 1;
	pass = 0;
	while (++i < size)
	{
		if (ft_strcmp(tab[i - 1], tab[i]) > 0)
		{
			temp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = temp;
			pass++;
		}
		if (pass > 0)
			ft_sort_char_tab(tab, size);
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	ft_sort_char_tab(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
