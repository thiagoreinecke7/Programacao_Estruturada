#include <stdio.h>
#include <math.h>

int solicitaMedida(char* texto){
    int medida;

    printf("Informe o tamanho do(a) %s: ", texto);
    scanf("%d", &medida);

    return medida;
}

int calculaArea(int opcao, int largura, int altura, int raio){
    int resposta;

    if(opcao == 1){
        resposta = largura * altura;
    }
    else if(opcao == 2){
        resposta = (largura * altura) / 2;
    }
    else{
        resposta = M_PI * pow(raio, 2);
    }

    return resposta;
}

void imprimeResposta(int area, char* texto){
    printf("A área do %s é: %d", texto, area );
}

int main(){
    int opcao, sair = 1;
    int lado, altura, raio, area;

    while(sair != 0){

        printf("A área de qual figura geométrica você deseja calcular? \n[1] Retangulo\n[2] Triangulo\n[3] Circulo\n\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                lado = solicitaMedida("lado");
                altura = solicitaMedida("altura");
                area = calculaArea(opcao, lado, altura, 0);
                imprimeResposta(area, "retângulo");
                break;

            case 2:
                lado = solicitaMedida("base");
                altura = solicitaMedida("altura");
                area = calculaArea(opcao, lado, altura, 0);
                imprimeResposta(area, "triângulo");
                break;

            case 3:
                raio = solicitaMedida("raio");
                area = calculaArea(opcao, lado, altura, raio);
                imprimeResposta(area, "círculo");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

        printf("\n\nDeseja sair? [0 para Sair] 2");
        scanf("%d", &sair);

        while(getchar()!='\n');
    }

    return 0;
}
