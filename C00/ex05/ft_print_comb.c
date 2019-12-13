/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 22:34:23 by gumartin          #+#    #+#             */
/*   Updated: 2019/11/22 23:53:56 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	unidades(int c, int d, int u)
{
	while (u <= '9')
	{
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u, 1);
		if ((c == '7' && d == '8' && u == '9') == 0)
			write(1, ", ", 2);
		u++;
	}
}

void	dezenas(int c, int d)
{
	while (d <= '9')
	{
		unidades(c, d, d + 1);
		d++;
	}
}

void	ft_print_comb(void)
{
	int c;

	c = '0';
	while (c <= '7')
	{
		dezenas(c, c + 1);
		c++;
	}
}
