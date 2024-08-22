#include <stdio.h>

// Declaração da função troca 
void troca (int x, int y){
	int aux;
	
	// Troca de valores de x e y
	aux = x;
	x = y;
	y = aux;
	
	// Exibe os valores trocados
	printf("Valor de a: %d, Valor de b: %d\n", x, y);
}

int main() {
	int a, b;
	
	a = 10;
	b = 5;
	
	troca(a, b);
	
	return 0;
}
