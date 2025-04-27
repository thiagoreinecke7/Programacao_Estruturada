#include <stdio.h>

//Atividade 2

float Media(float notas1, float notas2, float notas3){
    int soma = 0;
    int contador = 0;

    if (notas1 >= 0) {
        soma += notas1;
        contador++;
    }
    if (notas2 >= 0) {
        soma += notas2;
        contador++;
    }
    if (notas3 >= 0) {
        soma += notas3;
        contador++;
    }

    if (contador == 0) {
        return 0;
    }

    return (float)soma / contador;
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
    int nota1, nota2, nota3;
    float media3, media2;

    printf("Informe a primeira nota: ");
    scanf("%d", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%d", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%d", &nota3);

    media3 = Media(nota1, nota2, nota3);

    int maior1, maior2;

    if (nota1 >= nota2 && nota1 >= nota3) {
        maior1 = nota1;
        maior2 = maior(nota2, nota3);
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        maior1 = nota2;
        maior2 = maior(nota1, nota3);
    } else {
        maior1 = nota3;
        maior2 = maior(nota1, nota2);
    }

    media2 = Media(maior1, maior2, -1);

    printf("\nMédia usando as três notas: %.2f\n", media3);
    printf("Média usando as duas maiores notas: %.2f\n", media2);

    if (media3 > media2) {
        printf("A maior média é: %.2f\n", media3);
    } else {
        printf("A maior média é: %.2f\n", media2);
    }

    return 0;
}
