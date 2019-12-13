/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:12:50 by galves-d          #+#    #+#             */
/*   Updated: 2019/11/28 23:44:40 by galves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main()
{
	char			string[] = "Transferir frase";
	char			recebe1[50];
	char			recebe2[50];
	unsigned int	tamanho;

	tamanho = ft_strlcpy(recebe2, string, 0);
	printf("String inicial: %s\nString transferida: %s\nTamanho do src: %d\n", string, recebe2, tamanho);
	tamanho = strlcpy(recebe1, string, 0);
	printf("\nString inicial: %s\nString transferida: %s\nTamanho do src: %d\n", string, recebe1, tamanho);
}
