#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[10];
    int escolha;
    
    // Primeiro diálogo com a stalker girl
    printf("*Uma garota colegial se aproxima de voce*\n");
    printf("O-oi, eu estudo com voce na classe de matematica. Qual o seu nome?: ");
    int n = scanf("%s", nome);
    
    // Verifica se o nome foi lido corretamente e chama para o encontro
    if (n == 1) {
        printf("%s", nome);
        printf("\nQue nome lindo!");
        
        printf("\nV-voce quer ir num encontro c-c-comigo hoje?\n\n");
        
        printf("1 - Ir no encontro \n2 - Nao ir no encontro:\n");
        scanf("%d", &escolha);
        
        switch (escolha) {
            case 1:
                printf("Eba! Ha, quer dizer....isso e muito legal");
                break;
            case 2:
                printf("Ah...tudo bem. *Ela continuou te seguindo ate o ponto de onibus*");
                break;
            default:
                printf("Ops, escolha invalida. *Ela fica confusa e vai embora*");
                break;
        }
    } else {
        printf("Eh, desculpe, não consegui entender o seu nome. *Ela sai correndo*");
    }
    
    return 0;
}


