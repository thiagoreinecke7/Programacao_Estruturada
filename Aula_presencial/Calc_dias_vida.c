#include <stdio.h>




int main(){
    char nome[100];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Seu nome é: %s", nome);

    return 0;
}
