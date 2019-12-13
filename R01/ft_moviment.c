/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moviment.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:42:19 by gumartin          #+#    #+#             */
/*   Updated: 2019/12/01 23:10:39 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_na_borda(int i, int j)
{
	if (i != 1 || i != 2 || j != 1 || j != 2)
		return (1);
	return (0);
}
/* ref para x dist de (i, j) no eixo x */

/*ref para x dist de (i, j) no eixo y */

/*void ft_vetor_da_ref(int i, int j, int v[2]){*/

/*char	ft_valor_ref_oposto(char reso[4][4], char ref[2], int i, int j);*/
