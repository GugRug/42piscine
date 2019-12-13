/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ord_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 23:11:26 by gumartin          #+#    #+#             */
/*   Updated: 2019/12/01 23:12:19 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ord_matrix(char c, char mat[4][4])
{
	int line;
	int col;
	int pass;

	pass = 0;
	line = 0;
	col = 0;
	while (line < 4 && pass == 0)
	{
		while (col < 4 && pass == 0)
		{
			if (mat[line][col] == 0)
			{
				mat[line][col] = c;
				pass++;
			}
			col++;
		}
		col = 0;
		line++;
	}
}
