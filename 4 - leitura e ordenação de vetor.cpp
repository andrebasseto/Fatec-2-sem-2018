/*
André Luiz de Matos Basseto
2018-10-09
Leitura, ordenação e exibição de vetor
*/

#include <stdio.h>
main()
{
	int vet[6], i, j, aux;
	//Leitura do vetor
	printf("Digite um valor para \n");
	for (i=0; i<6; i++){
		printf("[%d]", i+1);
		scanf("%d", &vet[i]);
	}
	
	//Ordenação do vetor
	for (j=5; j>0; j--){
		for (i=0; i<j; i++){
			if(vet[i] > vet[i+1]){
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
			}
		}
	}
	
	//exibição do vetor ordenado
	for (i=0; i<6; i++){
		printf("[%d] ", vet[i]);
	}
}
