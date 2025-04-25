#include <stdio.h>

//Atividade 1.a
void desenhaLinha(int qtd){
    for(int i = 0; i < qtd ; i++){
        printf("=");}

    printf("\n");}

//Atividade 1.b
int intervalo(int a, int b){
    int soma = 0, auxiliar;

    if(a > b){
        auxiliar = a;
        a = b;
        b = auxiliar;}

    for(int i = a; i <= b; i++){
        soma += i;}

    return soma;}

//Atividade 1.c
int main(){
    int sair = 1, a, b;

    while(sair != 0){
        printf("\nDigite o valor de a: ");
        scanf("%d", &a);
        printf("Digite o valor de b: ");
        scanf("%d", &b);

        desenhaLinha(100);

        printf("A soma entre os numero %d e %d incluindo eles e: %d\n", a, b, intervalo(a, b));
        printf("\nSair? [0=S / 1=N] ");

        scanf("%d", &sair);}

    return 0;
}
