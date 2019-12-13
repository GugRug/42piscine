/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:11:59 by galves-d          #+#    #+#             */
/*   Updated: 2019/11/28 16:47:36 by galves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main()
{
	char string_original[] = "FrAsE De TeStE 123";
	char string_alterada[] = "FrAsE De TeStE 123";
	ft_strcapitalize(string_alterada);
	printf("str_original: %s, str_alterada: %s", string_original, string_alterada);
}
