#include "stdafx.h"
#define TAM 3
using namespace std;

struct ginasta {
	int incricao;
	float pontuacao[3];
}atletas[TAM];

void notas_ginastas() {
	int x = 0;
	for (; x < TAM; x++) {
		cout << "\n Digite a inscricao do atleta numero: " << x + 1 << ": "; cin >> atletas[x].incricao;
		cout << "\n Digite e de enter nas notas para as 3 provas do atleta"<< x+1 << ": " << x + 1 << ": "; 
		cin >> atletas[x].pontuacao[0];
		cin >> atletas[x].pontuacao[1];
		cin >> atletas[x].pontuacao[2];
	}
	system("cls");
	cout << "\n\n ATLETA\tNOTAS" << endl;
	x = 0;
	for (; x < TAM; x++) {
		cout << "\n\n" << atletas[x].incricao << "\t" << atletas[x].pontuacao[0] << "\t" << atletas[x].pontuacao[1] << "\t" << atletas[x].pontuacao[2];
	}
	cout << "\n\n";
}

void procura_funcionarios_mais_de_10_anos(funcsHP f[], int x) {
	int qtd = 0;
	for (int j = 0; j < x; j++) {
		if (f[j].dtentrada.ano < 2005) {
			qtd++;
		}
	}
	cout << "\n\n";
	cout << qtd << " funcionarios ha mais de 10 anos";
}
void lista_funcionarios(funcsHP f[], int x) {
	system("cls");
	cout << "\nLISTA DE FUNCIONARIOS DA IMPRESA DE IMPRESSORAS:";
	cout << "\nMATRICULA\tCARGO\tDATA DE CONTRATACAO";
	for (int i = 0; i < x; i++) {
		cout << "\n\n" << f[i].matricula << "\t" << f[i].cargo << "\t" << f[i].dtentrada.dia << f[i].dtentrada.mes << f[i].dtentrada.ano <<endl;
	}
	procura_funcionarios_mais_de_10_anos(f, x);
	cout << "\n\n";
}

void funcionarios_empresa_de_impressoras() {
	funcsHP f[2];
	for (int i = 0; i < 2; i++) {
		cout << "\nDigite a matricula para o funcionario numero " << i << ": "; 
		cin >> f[i].matricula;
		cout << "\nDigite o cargo para o funcionario de matricula " << f[i].matricula << ": ";
		cin >> f[i].cargo;
		cout << "\nDia de contratacao para o funcionario de matricula " << f[i].matricula << ": ";
		cin >> f[i].dtentrada.dia;
		cout << "\nMes de contratacao para o funcionario de matricula " << f[i].matricula << ": "; 
		cin >> f[i].dtentrada.mes;
		cout << "\nAno de contratacao para o funcionario de matricula " << f[i].matricula << ": "; 
		cin >> f[i].dtentrada.ano;
		cout << "\n\n";
	}
	lista_funcionarios(f, 2);
	procura_funcionarios_mais_de_10_anos(f,2);
}