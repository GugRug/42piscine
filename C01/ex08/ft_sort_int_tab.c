/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:37:41 by gumartin          #+#    #+#             */
/*   Updated: 2019/11/29 21:44:26 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	pass;
	int	cont;
	int temp;

	pass = 0;
	cont = 1;
	while (cont < size)
	{
		if (tab[cont - 1] > tab[cont])
		{
			temp = tab[cont - 1];
			tab[cont - 1] = tab[cont];
			tab[cont] = temp;
			pass++;
		}
		cont++;
	}
	if (pass > 0)
		ft_sort_int_tab(tab, size);
}
