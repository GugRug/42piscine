/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1way.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgouveia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 12:41:07 by rgouveia          #+#    #+#             */
/*   Updated: 2019/12/01 22:54:55 by ccamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_onlyzero(char m[4][4])
{
	int	i;
	int	j;
	int	pass;
	int soma;

	pass = 0;
	soma = 0;
	i = 0;
	j = 0;

	while(i < 4)
	{
		while(j < 4)
		{
			if(m[i][j] == 0)
			{
				if (m[0][j] == 0)
				{
					soma = ((m[i + 1][j]) - 48) + ((m[i + 2][j]) - 48) + ((m[i + 3][j]) - 48);
					pass++;
				}
				if (m[1][j] == 0)
				{
					soma = ((m[i - 1][j]) - 48) + ((m[i + 1][j]) - 48) + ((m[i + 2][j]) - 48);
					pass++;
				}
				if (m[2][j] == 0)
				{
					soma = ((m[i - 2][j]) - 48) + ((m[i - 1][j]) - 48) + ((m[i + 1][j]) - 48);
					pass++;
				}
				if (m[3][j] == 0)
				{
					soma = ((m[i - 1][j]) - 48) + ((m[i - 2][j]) - 48) + ((m[i - 3][j]) - 48);
					pass++;
				}
				if (pass == 1)
				/*	ft_set((soma - 10) + '0');*/
				soma = 0;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
