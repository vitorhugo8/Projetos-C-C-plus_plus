#include <stdio.h>
#include <stdlib.h>

int main() {
	// Mensagem de boas-vindas e solicitando o tamanho do array
	int num;
	printf("Seja bem-vindo ao laço de números divisíveis por 2!\n"); 
	
	printf("Quantos números você deseja inserir?: ");
	scanf("%d", &num);
	
	int array[num];
	int i = 0;
	
	// Lendo os números do array 
	for(i = 0; i < num; i++) {
		printf("Digite o número %d: ", i+1);
		scanf("%d", &array[i]);
	}
	
	// Exibindo os divisíveis por 2
	printf("Os números divisíveis por 2 são:\n");
	for(i = 0; i < num; i++) {
		if(array[i] % 2 == 0) {
			printf("%d ", array[i]); 
		}
	}
	return 0;
}
 
