/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:51:30 by gumartin          #+#    #+#             */
/*   Updated: 2019/12/07 14:51:41 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		i++;
	}
	i = 1;
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
		str[i - 1] -= 'a' - 'A';
	while (str[i])
	{
		if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			;
		else if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			;
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
