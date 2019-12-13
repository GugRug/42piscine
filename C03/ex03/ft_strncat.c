/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <gumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 05:59:11 by gumartin          #+#    #+#             */
/*   Updated: 2019/12/09 23:26:35 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*r;

	r = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*(dest++) = *(src++);
		nb--;
	}
	*dest = '\0';
	return (r);
}
