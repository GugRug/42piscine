/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <gumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 06:22:35 by gumartin          #+#    #+#             */
/*   Updated: 2019/12/10 15:32:56 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int pass;
	int i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		if (*str == *to_find)
		{
			pass = 1;
			while (to_find[i])
			{
				if (str[i] != to_find[i])
					pass = 0;
				i++;
			}
			if (pass == 1)
				return (str);
		}
		str++;
	}
	return (0);
}
