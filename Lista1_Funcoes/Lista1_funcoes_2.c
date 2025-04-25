#include <stdio.h>

int calcular(int km, int litros){
    int resposta;

    resposta = km / litros;
    printf("Resposta: %d", resposta);
    return resposta;
}

void imprimeResultado(int resposta){

    if(resposta < 8){
        printf("\nVenda o carro!\n");
    }
    else if(resposta <= 12){
        printf("\nEconômico\n");
    }
    else{
        printf("\nSuper Econômico\n");
    }
}

int main(){
    int distancia, litros;

    printf("Qual a distância em Km? ");
    scanf("%d", &distancia);
    printf("Qual a quantidade de litros gastos? ");
    scanf("%d", &litros);

    imprimeResultado(calcular(distancia, litros));

    return 0;
}
