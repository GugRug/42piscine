/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 20:50:30 by gumartin          #+#    #+#             */
/*   Updated: 2019/11/22 21:56:55 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alph;

	alph = 'a';
	while (alph < 'z' + 1)
	{
		write(1, &alph, 1);
		alph++;
	}
}
