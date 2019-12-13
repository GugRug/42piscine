/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 23:03:11 by galves-d          #+#    #+#             */
/*   Updated: 2019/11/28 16:11:03 by galves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char *string1 = "Teste";
	char string2[50];
	
	ft_strncpy(string2, string1, 5);
	printf("String1: %s    String2: %s\n", string1, string2);
	return (0);
}
