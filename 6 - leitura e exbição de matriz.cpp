/*
André Luiz de Matos Basseto
2018-10-10

Leitura e exibição de matriz
*/

#include <stdio.h>
main()
{
	int mat[3][3], i, j;
	printf("Digite um numero para matriz \n");
	
	//Leitura da matriz
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("[%d][%d]: ", i, j);
			scanf ("%d", &mat[i][j]);
		}
	}
	
	//Exibição da matriz
	for (i=0; i<3; i++){
		printf("\n");
		for (j=0; j<3; j++){
			printf(" [%d][%d] : %d", i, j, mat[i][j]);
		}
	}
}
