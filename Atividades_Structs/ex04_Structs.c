#include <stdio.h>
#include <string.h>

struct aluno{
    int matricula;
    char nomeAluno[30];
    float notas[3];
    float media;
    char status[15];
};

struct maiorPrimeiraNota{
    float maior;
    char nomeAluno[30];
};

struct aluno cadastraDados(){
    struct aluno aux;
    float soma = 0;

    printf("Qual a matricula do aluno: ");
    scanf("%d", &aux.matricula);
    getchar();
    printf("Qual o nome do aluno: ");
    fgets(aux.nomeAluno, sizeof(aux.nomeAluno), stdin);
    aux.nomeAluno[strcspn(aux.nomeAluno, "\n")] = '\0';

    for(int a = 0; a < 3; a++){
        printf("Qual a %dª nota: ", a + 1);
        scanf("%f", &aux.notas[a]);
        soma += aux.notas[a];
    }

    aux.media = soma/3;

    if(aux.media < 6){
        strcpy(aux.status, "Reprovado");
    }else{
        strcpy(aux.status, "Aprovado");
    }

    printf("\n");
    return aux;
};

void imprimeAluno(struct aluno ax){
    printf("\n");
    printf("Matricula: %04d\n", ax.matricula);
    printf("Aluno: %s\n", ax.nomeAluno);

    for(int i = 0; i < 3; i++){
        printf("Nota %d: %05.2f\n", i+ 1, ax.notas[i]);
    };
    printf("Media: %05.2f\n", ax.media);
    printf("Status: %s\n", ax.status);
};

int main(){
    struct aluno listaAlunos[5];
    float maior, mediaMaior, mediaMenor;
    char idAlunoNotaMaior[30], alunoMediaMaior[30], alunoMediaMenor[30];

    for(int i = 0; i < 5; i++){
        listaAlunos[i] = cadastraDados();
    }

    maior = listaAlunos[0].notas[0];
    strcpy(idAlunoNotaMaior, listaAlunos[0].nomeAluno);
    mediaMaior = listaAlunos[0].media;
    strcpy(alunoMediaMaior, listaAlunos[0].nomeAluno);
    mediaMenor = listaAlunos[0].media;
    strcpy(alunoMediaMenor, listaAlunos[0].nomeAluno);

    for(int i = 0; i < 5; i++){
        imprimeAluno(listaAlunos[i]);

        if(listaAlunos[i].notas[0] > maior){
            maior = listaAlunos[i].notas[0];
            strcpy(idAlunoNotaMaior, listaAlunos[i].nomeAluno);
        }
        if(listaAlunos[i].media > mediaMaior){
            mediaMaior = listaAlunos[i].media;
            strcpy(alunoMediaMaior, listaAlunos[i].nomeAluno);
        }
        if(listaAlunos[i].media < mediaMenor){
            mediaMenor = listaAlunos[i].media;
            strcpy(alunoMediaMenor, listaAlunos[i].nomeAluno);
        }
    }

    printf("\nA maior Primeira nota foi de %05.2f do aluno %s\n", maior, idAlunoNotaMaior);
    printf("A maior média foi de %05.2f do aluno %s\n", mediaMaior, alunoMediaMaior);
    printf("A menor média foi de %05.2f do aluno %s\n", mediaMenor, alunoMediaMenor);

    return 0;
}
