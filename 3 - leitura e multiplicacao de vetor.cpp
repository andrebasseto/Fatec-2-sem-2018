/*
Andr� Luiz de Matos Basseto
2018-10-09
Multiplica��o de vetor
*/

#include <stdio.h>
main()
{
	//leitura do vetor 1
	int vet1[5], vet2[5], vetmult[5], i;
	printf("Digite valores para o vetor 1 \n");
	for (i=0; i<5; i++){
		printf("[%d]", i);
		scanf("%d", &vet1[i]);
	}
	
	//leitura do vetor 2
	printf ("Digite valores para o vetor 2 \n");
	for (i=0; i<5; i++){
		printf("[%d]", i);
		scanf("%d", &vet2[i]);
	}
	
	//gerar vetor multiplica��o
	for(i=0; i<5; i++){
		vetmult[i] = vet1[i]*vet2[i];
	}
	
	//exibi��o do vetor multiplica��o
	for(i=0; i<5; i++){
		printf("[%d] ", vetmult[i]);
	}
}
