#include <stdio.h>
#include <stdlib.h>

int main() {
	// Mensagem de boas-vindas e solicitando o tamanho do array
	int num;
	printf("Seja bem-vindo ao la�o de n�meros divis�veis por 2!\n"); 
	
	printf("Quantos n�meros voc� deseja inserir?: ");
	scanf("%d", &num);
	
	int array[num];
	int i = 0;
	
	// Lendo os n�meros do array 
	for(i = 0; i < num; i++) {
		printf("Digite o n�mero %d: ", i+1);
		scanf("%d", &array[i]);
	}
	
	// Exibindo os divis�veis por 2
	printf("Os n�meros divis�veis por 2 s�o:\n");
	for(i = 0; i < num; i++) {
		if(array[i] % 2 == 0) {
			printf("%d ", array[i]); 
		}
	}
	return 0;
}
 
