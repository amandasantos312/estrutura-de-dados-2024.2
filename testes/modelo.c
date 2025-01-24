#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int mat;
	char nome[30];
} TAluno;

TAluno v[20];
int ultimo = 0;

void inserir(TAluno novo){	
	if(ultimo < 20) {
		v[ultimo] = novo;
		ultimo++;
	} else {
		printf("Lista Cheia!");
	}
}

void remover(int procurado){
	int i, encontrado = 0;

	for(i = 0; i < ultimo; i++) {
		if (v[i].mat == procurado) {
			encontrado = 1;
			break;
		}
	}
	if (encontrado) {
		for (int j = i; j < ultimo - 1; j++) {
			v[j] = v[j+1];
		}
		ultimo--;
		printf("Aluno removido!");
	} else {
		printf("Aluno não encontrado!");
	}
}

void mostra(){
	if (ultimo == 0) {
		printf("Nenhum aluno cadastrado.\n");
		return;
	}

	printf("Lista de alunos:\n");
	for (int i = 0; i < ultimo; i++) {
		printf("Matrícula: %d, Nome: %s\n", v[i].mat, v[i].nome);
	}
}

int main(){
	TAluno aluno1 = {101, "Amanda"};
	TAluno aluno2 = {102, "Giovanna"};

	inserir(aluno1);
	inserir(aluno2);
}