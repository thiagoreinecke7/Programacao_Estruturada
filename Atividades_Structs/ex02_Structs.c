#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[20];
    int idade;
    char endereco[150];
};

struct pessoa lePessoa(){
    struct pessoa auxiliar;

    printf("Nome: ");
    fgets(auxiliar.nome, sizeof(auxiliar.nome), stdin);
    auxiliar.nome[strcspn(auxiliar.nome, "\n")] = '\0';
    printf("Idade: ");
    scanf("%d", &auxiliar.idade);
    getchar();
    printf("Endereço: ");
    fgets(auxiliar.endereco, sizeof(auxiliar.endereco), stdin);
    auxiliar.endereco[strcspn(auxiliar.endereco, "\n")] = '\0';

    return auxiliar;
};

void imprimePessoa(struct pessoa ax){
    printf("\nNome da pessoa: %s\n", ax.nome);
    printf("Idade da pessoa: %03d\n", ax.idade);
    printf("Endereço da pessoa: %s\n", ax.endereco);
}

int main(){
    struct pessoa P1;
    P1 = lePessoa();
    imprimePessoa(P1);

    return 0;
}
