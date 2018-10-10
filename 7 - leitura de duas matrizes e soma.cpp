/*
André Luiz de Matos Basseto
2018-10-10

Realiza a leitura de 2 matrizes e a soma das duas gerando uma matriz soma
*/

#include <stdio.h>
main()
{
	int mat1[3][3], mat2[3][3], matsoma[3][3], j, i;
	printf ("Digite os valores para a primeira matriz \n");
	
	//Leitura da primeira matriz
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf (" [%d][%d]: ", i, j);
			scanf ("%d", &mat1[i][j]);
		}
	}
	
	printf ("Digite os valores para a segunda matriz \n");
	//leitura da segunda matriz
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf (" [%d][%d]: ", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	//Gerar a matriz soma
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			matsoma[i][j] = mat1[i][j]+mat2[i][j];
		}
	}
	
	//Exibição da matriz soma
	for (i=0; i<3; i++){
		printf("\n");
		for (j=0; j<3; j++){
			printf(" [%d] ", matsoma[i][j]);
		}
	}
}
