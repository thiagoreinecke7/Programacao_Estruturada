#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[30];
    int matricula;
    char curso[30];
};

struct aluno leAluno(qtd){
    struct aluno ax;

    printf("Nome do %dº Aluno(a): ", qtd + 1);
    fgets(ax.nome, sizeof(ax.nome), stdin);
    ax.nome[strcspn(ax.nome, "\n")] = '\0';
    printf("Digite a Matricula do %dº Aluno(a): ", qtd + 1);
    scanf("%d", &ax.matricula);
    getchar();
    printf("Digite o curso do %d Aluno(a): ", qtd + 1);
    fgets(ax.curso, sizeof(ax.curso), stdin);
    ax.curso[strcspn(ax.curso, "\n")] = '\0';
    printf("\n");

    return ax;
};

void imprimeAluno(struct aluno ax){
    printf("Aluno: %s\n", ax.nome);
    printf("Matricula: %d\n", ax.matricula);
    printf("Curso: %s\n", ax.curso);
    printf("\n");
};

int main(){
    struct aluno listaAluno[5];

    for(int i = 0; i < 5; i++){
        listaAluno[i] = leAluno(i);
    }

    for(int i = 0; i < 5; i++){
        imprimeAluno(listaAluno[i]);
    }

    return 0;
}
