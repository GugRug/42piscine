/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 01:10:34 by gumartin          #+#    #+#             */
/*   Updated: 2019/11/28 12:46:38 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_loopings(int d1, int u1, int d2, int u2)
{
	while (d2 <= '9')
	{
		while (u2 <= '9')
		{
			write(1, &d1, 1);
			write(1, &u1, 1);
			write(1, " ", 1);
			write(1, &d2, 1);
			write(1, &u2, 1);
			if (d1 < '9' || u1 < '8' || d2 < '9' || u2 < '9')
				write(1, ", ", 2);
			u2++;
		}
		u2 = '0';
		d2++;
	}
}

void	ft_conditions(int d1, int u1, int d2, int u2)
{
	while (d1 <= '9')
	{
		d2 = d1;
		if (u1 < '9')
			u2 = u1 + 1;
		else
		{
			u2 = '0';
			d2++;
		}
		ft_loopings(d1, u1, d2, u2);
		if (u1 < '9')
			u1++;
		else
		{
			u1 = '0';
			d1++;
		}
	}
}

void	ft_print_comb2(void)
{
	int d1;
	int u1;
	int d2;
	int u2;

	d1 = '0';
	u1 = '0';
	d2 = '0';
	u2 = '0';
	ft_conditions(d1, u1, d2, u2);
}
