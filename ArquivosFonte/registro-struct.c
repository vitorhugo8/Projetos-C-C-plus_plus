#include <stdio.h>
#include <string.h>

struct Usuario {
    char nome[50];
    char email[50];
    int idade;
};

int main() {
    struct Usuario usuario;
    char confirmado;
    int dados_corretos;
    
    do {
        // Lendo os dados
        printf("Digite seu nome: ");
        scanf("%s", usuario.nome);
        
        printf("Digite seu email: ");
        scanf("%s", usuario.email);
        
        printf("Digite sua idade: ");
        scanf("%d", &usuario.idade);
        
        // Exibindo os dados
        printf("\nOs dados inseridos s�o:\n");
        printf("Nome: %s\n", usuario.nome);
        printf("Email: %s\n", usuario.email);
        printf("Idade: %d\n", usuario.idade);
        
        // Perguntando se os dados est�o corretos
        printf("Os dados est�o corretos? (s/n): ");
        scanf(" %c", &confirmado);
        
        // Verifica os dados do usu�rio
        if (confirmado == 's' || confirmado == 'S') {
            dados_corretos = 1; 
        } else {
            dados_corretos = 0; 
            printf("\nVamos tentar novamente.\n\n");
        }
        
    } while (dados_corretos == 0);
    
    // Mensagem final
    printf("\nCadastro realizado com sucesso!\n");
    
    return 0;
}

