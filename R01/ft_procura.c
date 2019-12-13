/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_procura.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:48:36 by ccamara           #+#    #+#             */
/*   Updated: 2019/12/01 23:17:39 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	zerar_posi(char posi[16][2])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		while (j < 2)
		{
			posi[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

int	ft_procura_cont(char n, char mat[4][4], char posi[16][2])
{
	int i;
	int j;
	int p_i;

	i = 0;
	j = 0;
	p_i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (n == mat[i][j])
			{
				posi[p_i][0] = i;
				posi[p_i][1] = j;
				p_i++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (p_i);
}

void	ft_procura_ref(char n, char mat[4][4], char posi[16][2])
{
	int i;
	int j;
	int p_i;

	i = 0;
	j = 0;
	p_i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (n == mat[i][j])
			{
				posi[p_i][0] = i;
				posi[p_i][1] = j;
				p_i++;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
