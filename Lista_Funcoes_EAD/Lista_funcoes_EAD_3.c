#include <stdio.h>

int maior(int a, int b){

    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int sair = 0, total_num, valor, num_maior;

    while(sair == 0){
        printf("Quantos n�mero deseja ver? [1 - 10] ");
        scanf("%d", &total_num);

        if(total_num < 1 || total_num > 10){
            printf("\nN�mero inv�lido. Digite um n�mero de 1 a 10\n\n");
        }else{
            sair = 1;
        }
        while(getchar() != '\n');
    }

    printf("\nDigite o 1� valor: ");
    scanf("%d", &num_maior);

    for(int i = 1; i < total_num; i++){
        printf("Digite o %d� valor: ", i + 1);
        scanf("%d", &valor);

        num_maior = maior(num_maior, valor);
    }

    printf("O maior valor �: %d", num_maior);

    return 0;
}
