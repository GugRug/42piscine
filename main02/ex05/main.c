/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 16:11:59 by galves-d          #+#    #+#             */
/*   Updated: 2019/11/28 16:21:40 by galves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main()
{
	char *string_true = "APENASCARACTERESPERMITIDOS";
	char *string_false = "CaracteresNaoPermitidos";

	printf("str_true: %d, str_false: %d", ft_str_is_uppercase(string_true), ft_str_is_uppercase(string_false));
}
