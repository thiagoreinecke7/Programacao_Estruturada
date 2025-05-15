#include <stdio.h>
#include <string.h>

struct aluno{
    int matricula;
    char nome[30];
    int disciplina;
    float nota1, nota2, media;
};

struct aluno pegaDados(int i){
    struct aluno aux;

    printf("Qual a matricula do aluno %d: ", i);
    scanf("%d", &aux.matricula);
    getchar();
    printf("Qual o nome do aluno: ");
    fgets(aux.nome, sizeof(aux.nome), stdin);
    aux.nome[strcspn(aux.nome, "\n")] = '\0';
    printf("Qual o Código da Disciplina do Aluno: ");
    scanf("%d", &aux.disciplina);

    printf("Qual a nota1: ");
    scanf("%f", &aux.nota1);
    printf("Qual a nota2: ");
    scanf("%f", &aux.nota2);

    aux.media = (aux.nota1 * 0.3333) + (aux.nota2 * 0.6666);

    printf("\n");
    return aux;
};

void imprimeAluno(struct aluno ax){
    printf("\n");
    printf("Matricula: %04d ", ax.matricula);
    printf("Aluno: %20s ", ax.nome);
    printf("Media: %05.2f ", ax.media);

};

int main(){
    struct aluno listaAlunos[10];

    for(int i = 0; i < 2; i++){
        listaAlunos[i] = pegaDados(i + 1);
    }

    for(int i = 0; i < 2; i++){
        imprimeAluno(listaAlunos[i]);
    }
    printf("\n");

    return 0;
}
