#include <stdio.h>

//Atividade 2

float media(float notas1, float notas2, float notas3){
    float med3 = 0;
    int contador = 3;

    if(notas1 < 0 || notas2 < 0 || notas3 < 0){

    }
    else{
        return med3 = (notas1 + notas2 + notas3) / 3;
    }
}

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
    int A;
    float notas[3];

    for(int i = 0; i < 3; i++){

        printf("Digite o a %dª nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i < 3; i++){
        for(int n = 0; n < 2; n++){
            if(notas[n] > notas[n + 1]){
                A = notas[n];
                notas[n] = notas[n + 1];
                notas[n + 1] = A;
            }
        }
    }


    printf("\nA média é com 3 notas é: %.2f", media(notas[0], notas[1], notas[2]));


    return 0;
}
