#include "stdafx.h"
#define TAM 3
using namespace std;

/*
formas de acessar um membro de uma estrutura atraves de um ponteiro:

usando o operador ->
nomeDaVariavelPonteiro -> membro
usando o operador *
(*nomeDaVariavelPonteiro).membro

para se atribuir o endereco de uma estrutura a um ponteiro:
nomeDaVariavelPonteiro = &nomeDaEstrutura;

*/
void struct_em_ponteiro(){
	data data_nasc, *ptr;

	int d;
	cout << "\nDigite data de nascimento no formato ddmmaa: ";
	cin >> d;
	
	ptr = &data_nasc;

	ptr->dia = d / 10000;
	ptr->mes = (d / 100) % 100;
	ptr->ano = d % 100;

	cout << "\n\nSua data de nascimento " << ptr->dia << "/" << ptr->mes << "/" << ptr->ano;
	cout << "\n\n";
}

void preenche_cadastro(){
	cadastro aluno, *p;
	cout << "\nNome do aluno: ";
	cin.getline(aluno.nome, 30);
	cout << "\nNota: ";
	cin >> aluno.nota;

	p = &aluno; // aponta o ponteiro para a estrutura
	exibe_cadastro(p);
	cout << "\n\n";
}

void exibe_cadastro(cadastro*p){
	for (int c = 0; c < strlen(p->nome); c++){
		p->nome[c] = toupper(p->nome[c]);
	}
	cout << "\nDados do Aluno\n";
	cout << "\n\nNome: " << p->nome; //recuperando o membro usando o operador ->
	cout << "\n\nNota: " << (*p).nota; // recuperando o membro usando o operador *
}
/*

A alocacao dinamica e feita usando o operador new

Declarando e Inicializando um ponteiro para alocar, dinamicamente, a memória:
tipo *nomeDoPonteiro = new tipo;
tipo *nomeDoPonteiro = new tipo[...];
Onde: tipo é do tipo ponteiro.
*/
void ponteiro_alocado_dinamicamente(){
	int *pt = new int(1024);
	cout << "\nValor que foi inicializado: " << *pt << "\n\n";
}

/*
Ponteiro e matriz de estruturas
*/
void ponteiro_e_matriz_de_estruturas(){

	cadastro *ptr = new cadastro[TAM];

	int i;
	for (i = 0; i < TAM; i++){
		cout << "\nDigite a nota: ";
		cin >> ptr[i].nota; // atribuindo a um membro de um vetor de struct no ponteiro
	}

	for (i = 0; i < TAM; i++){
		cout << "\n\n" << (ptr + i)->nota; // lendo um membro de um vetor de struct no ponteiro
	}
}

/*
Operacoes que podem ser realizadas com as listas simplesmente encadeadas:
- inicializar
- inserir um no no inicio ou no fim ou em qualquer posicao
- remover no
- percorrer a lista
*/
void cria_no(){
	nodo* no1 = new nodo; // cria no
	no1->num = 23; //atribui valor aos membros
	no1->prox = NULL; //atribui valor aos membros
	cout << "\nValor do no1: " << no1->num; //exibe
	delete no1; //libera
	no1 = 0; //libera
}

void cria_lista_com_nodos(){
	nodo* lista = new nodo;
	lista->num = 42;
	lista->prox = new nodo;
	lista->prox->num = 43;
	lista->prox->prox = new nodo;
	lista->prox->prox->num = 44;
	lista->prox->prox->prox = NULL;
	delete lista; lista = 0;
}

void insere_no_na_frente(){
	nodo *temp, *lista = NULL;

	//primeiro no
	temp = new nodo;
	temp->num = 1;
	temp->prox = lista;
	lista = temp;

	//segundo no
	temp = new nodo;
	temp->num = 2;
	temp->prox = lista;
	lista = temp;

	cout << "\nNodo1 = " << lista->num;
	cout << "\nNodo2 = " << lista->prox->num;

	delete lista; lista = 0;
}

