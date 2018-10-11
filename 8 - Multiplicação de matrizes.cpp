/*
Andr� Luiz de Matos Basseto
2018-10-10
Multiplica��o de matrizes
Leitura de 2 matrizes e gera��o da matriz multiplica��o
*/
#include <stdio.h>
main()
{
	int mat1[3][3], mat2[3][3], matmult[3][3], i, j, k;
	printf ("Digite os numeros para a primeira matriz \n");
	
	//leitura da matriz 1
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf (" [%d][%d] ", i, j);
			scanf ("%d", &mat1[i][j]);
		}
	}
	
	printf ("Digite os numeros para a segunda matriz matriz \n");
	//leitura da matriz 2
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf (" [%d][%d] ", i, j);
			scanf ("%d", &mat2[i][j]);
		}
	}
	
	//zerar matriz multiplica��o para evitar lixos da memoria
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			matmult[i][j] = 0;
		}
	}
		
	//gerar a matriz multiplica��o
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			for (k=0; k<3; k++){
				matmult[i][j] = matmult[i][j] + mat1[i][k]*mat2[k][j];
			
			}
		}
	}
	
	//Exibi��o da matriz multiplica��o
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf(" [%d][%d]: %d", i, j, matmult[i][j]);
		}
		printf("\n");
	}
}
