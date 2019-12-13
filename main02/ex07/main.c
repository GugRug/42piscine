/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:11:59 by galves-d          #+#    #+#             */
/*   Updated: 2019/11/28 16:32:45 by galves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main()
{
	char string_original[] = "Frase De Teste 123";
	char string_alterada[] = "Frase De Teste 123";
	ft_strupcase(string_alterada);
	printf("str_original: %s, str_alterada: %s", string_original, string_alterada);
}
