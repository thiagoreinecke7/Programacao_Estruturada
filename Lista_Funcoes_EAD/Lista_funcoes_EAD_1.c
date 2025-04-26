#include <stdio.h>

// Atividade 1 Lista EAD

int maior(int a, int b){

    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int a, b;

    printf("Digite o 1º número: ");
    scanf("%d", &a);
    printf("Digite o 2º número: ");
    scanf("%d", &b);

    printf("\nO Maior número digitado é %d", maior(a, b));

    return 0;
}
