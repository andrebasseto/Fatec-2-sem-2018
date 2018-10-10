/*
André Luiz de Matos Basseto
2018-10-08
Leitura e exibição de um vetor
*/
#include <stdio.h>
main()
{
	int vet[5], i;
	printf("Digite valores para um vetor de 5 posicoes \n");
	for (i=0; i<5; i++){
		printf("vet[%d]", i);
		scanf("%d", &vet[i]);
	}
	for (i=0;i<5; i++){
		printf("[%d] ", vet[i]);
	}
}
