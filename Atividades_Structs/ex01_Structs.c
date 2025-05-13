#include <stdio.h>
#include <string.h>

struct Horario{
    int hora, minuto, segundo;
};

struct Data{
    int dia, mes, ano;
};

struct Compromisso{
    struct Data aData;
    struct Horario aHorario;
    char descricao[100];
};

void imprimeCompromisso(struct Compromisso auxiliar){
    printf("Data: %02d/%02d/%04d\n", auxiliar.aData.dia, auxiliar.aData.mes, auxiliar.aData.ano);
    printf("Hor�rio: %02d:%02d:%02d\n", auxiliar.aHorario.hora, auxiliar.aHorario.minuto, auxiliar.aHorario.segundo);
    printf("Descri��o do compromisso: %s\n", auxiliar.descricao);
    printf("\n");
};

int main(){

    //Inicializando a struct com seu conte�do.
    struct Compromisso auxiliar = {
        {12, 05, 2025}, //Data
        {14, 30, 25}, //Horario
        "Agendando um compromisso" //Descri��o
    };

    //Imprimindo as informa��es na tela.
    imprimeCompromisso(auxiliar);

    //Modificando os valores.
    auxiliar.aData.dia = 13;
    auxiliar.aData.mes = 5;
    auxiliar.aData.ano = 2026;

    auxiliar.aHorario.hora = 16;
    auxiliar.aHorario.minuto = 35;
    auxiliar.aHorario.segundo = 55;

    strcpy(auxiliar.descricao, "Finaliza��o da Atividade 1");

    //Imprimindo modifica��es
    imprimeCompromisso(auxiliar);

    return 0;
}
