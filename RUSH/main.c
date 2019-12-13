#include <stdio.h>

void	ft_ord_matrix(char c, char mat[4][4]);
int	ft_na_borda(int i, int j);
void	zerar_posi(char posi[16][2]);
void	print_matriz(char m[4][4]);
void	ft_onlyzero(char m[4][4]);
int	ft_procura_cont(char n, char mat[4][4], char posi[16][2]);
void	ft_procura_ref(char n, char mat[4][4], char posi[16][2]);

int	main(int argc, char *argv[])
{	
	char	mat[4][4];
	char	reso[4][4];
	char	a;

	a = *argv[argc - 1];
	while (a != '\0')
	{
		if (a != ' ')
			ft_ord_matrix(a, mat);
		a = *++argv[argc - 1];
	}
	print_matriz(reso);
	return 1;
}
