/*
Andr� Luiz de Matos Basseto
2018-10-09
Leitura, ordena��o e exibi��o de vetor
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
	
	//Ordena��o do vetor
	for (j=5; j>0; j--){
		for (i=0; i<j; i++){
			if(vet[i] > vet[i+1]){
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
			}
		}
	}
	
	//exibi��o do vetor ordenado
	for (i=0; i<6; i++){
		printf("[%d] ", vet[i]);
	}
}
