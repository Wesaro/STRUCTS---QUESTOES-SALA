#include <stdio.h>

// Define uma estrutura para armazenar os dados de uma pessoa
typedef struct {
    char nome[100];
    int idade;
    char endereco[200];
} Pessoa;

int main() {
    Pessoa p;

    printf("Digite o nome: ");
    gets(p.nome); 

    printf("Digite a idade: ");
    scanf("%d", &p.idade);
    getchar(); 

    printf("Digite o endereço: ");
    gets(p.endereco);  

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereço: %s\n", p.endereco);

    return 0;
}