#include <stdio.h>

// Criando a sub-rotina
int soma(int a, int b){
	int resultado;
	resultado = a + b;
	return resultado;
}

// Função principal
int main() {
	int n, m;
	
	// inicialização das variáveis 
	n = 8;
	m = 4;
	
	printf("O Resultado da soma é: %d\n", soma(n, m));
	return 0;
}
