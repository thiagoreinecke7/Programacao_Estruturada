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

    printf("Digite o 1� n�mero: ");
    scanf("%d", &a);
    printf("Digite o 2� n�mero: ");
    scanf("%d", &b);

    printf("\nO Maior n�mero digitado � %d", maior(a, b));

    return 0;
}
