#include <stdio.h>

// Criando a sub-rotina
int soma(int a, int b){
	int resultado;
	resultado = a + b;
	return resultado;
}

// Fun��o principal
int main() {
	int n, m;
	
	// inicializa��o das vari�veis 
	n = 8;
	m = 4;
	
	printf("O Resultado da soma �: %d\n", soma(n, m));
	return 0;
}
