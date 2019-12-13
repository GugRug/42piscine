/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:37:04 by gumartin          #+#    #+#             */
/*   Updated: 2019/12/08 05:35:00 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (i < n)
	{
		if (j == 0 && src[i])
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			j++;
		}
		i++;
	}
	return (dest);
}
