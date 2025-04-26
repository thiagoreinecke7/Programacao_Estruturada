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
    int vetor[10], ordenador = 0, auxiliar, num_maior;

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor escrito foi: [ ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("]\n\n");

    printf("Deseja ordena-lo? \n[1] Crescente\n[2] Decrecente \n");
    scanf("%d", &ordenador);

    while(ordenador != 1 && ordenador != 2){
        printf("Opçao invalida. \n[1] Crescente\n[2] Decrecente \n");
        scanf("%d", &ordenador);
        while(getchar()!='\n');
    }

    if(ordenador == 1){
        for(int i = 0; i < 10; i++){
            for(int n = 0; n < 9; n++){
                num_maior = maior(vetor[n], vetor[n +1]);

                if(num_maior == vetor[n]){
                    auxiliar = vetor[n + 1];
                    vetor[n + 1] = num_maior;
                    vetor[n] = auxiliar;
                }
            }
        }
        printf("\nVetor na forma crescente: [ ");
        for(int i = 0; i < 10; i++){
            printf("%d ", vetor[i]);
        }
        printf("]\n\n");
    }else{
        for(int i = 10; i > 0; i--){
            for(int n = 9; n > 0; n--){
                num_maior = maior(vetor[n], vetor[n - 1]);

                if(num_maior == vetor[n]){
                    auxiliar = vetor[n - 1];
                    vetor[n - 1] = num_maior;
                    vetor[n] = auxiliar;
                }
            }
        }
        printf("\nVetor na forma decrescente: [ ");
        for(int i = 0; i < 10; i++){
            printf("%d ", vetor[i]);
        }
        printf("]\n\n");
    }

    return 0;
}
