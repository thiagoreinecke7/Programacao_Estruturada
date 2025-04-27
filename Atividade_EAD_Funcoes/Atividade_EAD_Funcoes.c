#include <stdio.h>

/*Descrição:
O programa simula a contagem de pontos de um jogador em 3 rodadas de um jogo.
O usuário informa os pontos conquistados em cada rodada e o programa soma os pontos.
Pergunta ao jogador, com um char, se ele quer usar um "bônus" ('S' para sim, 'N' para não).
Se o jogador escolher "sim", a pontuação total é aumentada em 50 pontos.
Caso contrário, a pontuação permanece igual.
Por fim o programa classifica o jogador através da função impressao de
acordo com o total de pontos informados.
*/


int contabilizador(int num1, char opcao){

    if(opcao == 's' || opcao == 'S'){
        return (num1 + 50);
    }else{
        return num1;
    }
}

void impressao(valor){
    printf("\nO total de pontos nas 3 rodadas foram: %d\n", valor);
    if(valor < 50){
        printf("\nVocê foi desqualificado!\n");
    }else if(valor >= 50 && valor <= 100){
        printf("\nVocê foi aprovado para CLASSE B\n");
    }else{
        printf("\nVocê foi aprovado para CLASSE A\n");
    }
}

void desenhaLinha(int qtd){
    printf("\n");
    for(int i = 0; i < qtd ; i++){printf("=");}
    printf("\n");
}

int main(){
    int ponto1, ponto2, ponto3, soma = 0;
    char opcao;

    desenhaLinha(100);
    printf("CONTADOR DE PONTOS - RODADAS CONTABILIZADAS: 3");
    desenhaLinha(100);
    printf("Classificação de pontuaçao:\nAbaixo de 50pts - Desclassificado\nEntre 50-100pts - Aprovado Classe B\nEntre 100-150pts - Aprovado Classe A");
    desenhaLinha(100);

    printf("\nDigite os pontos da 1ª Rodada: ");
    scanf("%d", &ponto1);
    printf("Digite os pontos da 2ª Rodada: ");
    scanf("%d", &ponto2);
    printf("Digite os pontos da 3ª Rodada: ");
    scanf("%d", &ponto3);

    soma = ponto1 + ponto2 + ponto3;

    printf("\nDeseja utilizar o Bonus de de 50pts do VITORIOSO CONSECUTIVO? [S / N] ");
    scanf(" %c", &opcao);

    while(opcao != 'S' && opcao != 'N' && opcao != 's' && opcao != 'n'){
        printf("Valor invalido. [S / N] ");
        scanf(" %c", &opcao);
        while(getchar()!='\n');
    }

    desenhaLinha(100);
    impressao(contabilizador(soma, opcao));
    desenhaLinha(100);

    return 0;
}
