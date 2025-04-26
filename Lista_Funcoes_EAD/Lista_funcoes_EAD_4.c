#include <stdio.h>
#include <time.h>

int maior(int a, int b){

    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int vetor[10], ordenador = 0, auxiliar;
    srand(time(NULL));


    for(int i = 0; i < 10; i++){
        /*printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);*/
        vetor[i] = rand()%15 + 0;
    }

    printf("Vetor escrito foi: [ ");
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

        }
    }else{

    }

    return 0;
}
