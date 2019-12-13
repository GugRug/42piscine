/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 13:57:13 by lmartins          #+#    #+#             */
/*   Updated: 2019/12/08 19:46:01 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		check(int argc, char *input)
{
	int i;

	if (argc > 3)
		return (0);
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		definir_tamanho(char *input)
{
	int tamanho;

	tamanho = 0;
	while (input[tamanho] != '\0')
	{
		tamanho++;
	}
	return (tamanho);
}

void	quebrar_blocos(char *argv, int tamanho)
{
	char	*array;
	int		i;
	int		aux;

	aux = 0;
	while (tamanho > 0)
	{
		array = (char *)malloc(tamanho * sizeof(char));
		i = 1;
		while (i <= tamanho)
		{
			if (i == 1)
				array[i] = argv[aux];
			else
				array[i] = '0';
			printf("%c", array[i]);
			i++;
		}
		printf("\n");
		free(array);
		aux++;
		tamanho--;
	}
}

int		main(int argc, char **argv)
{
	char	*input;
	int		tamanho;

	input = argv[1];
	if (argc == 3)
		input = argv[2];
	else if (argc == 1)
		return (0);
	if (check(argc, input) == 0)
	{
		write(1, "O argumento não é valido.\n", 26);
		return (0);
	}
	tamanho = definir_tamanho(input);
	quebrar_blocos(input, tamanho);
	return (0);
}
