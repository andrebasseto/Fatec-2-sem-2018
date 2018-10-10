/*
André Luiz de Matos Basseto
2018-10-09
Leitura de vetor
*/
#include <stdio.h>
main()
{
	int vet[5], i;
	printf ("Digite valores para um vetor de 5 posicoes \n");
	for (i=0; i<5; i++){
		printf("vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
}
