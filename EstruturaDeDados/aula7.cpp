#include "stdafx.h"
#define TAM 3
using namespace std;
/*
inicialia()				init()
enfileira()				enqueue()
desenfileira()			dequeue()
elemPrimeiro()			firstElem()
verificaFilaCheia()		isFull()
verificaFilaVazia()		isEmpty()
*/


void inicializa() {
	queue q;
	q.inicio = 0;
	q.fim = -1;
	int op;

	do {
		cout << "\n1 - Inserir um valor na fila" << endl;
		cout << "\n2 - Remover um valor da fila" << endl;
		cout << "\n3 - sair" << endl;
		cout << "\nOpcao: ";
		cin >> op;
		system("cls");
		switch (op) {
		case 1:	enfileira(q);
			break;
		case 2: desenfileira(q);
			break;
		case 3:	cout << "\nPrograma basico de fila" << endl;
			break;
		default: cout << "\nOpcao invalida!\n" << endl;

		}
	} while (op != 3);
}

bool verifica_fila_cheia(queue &q) {
	if (q.fim == TAM - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

void enfileira(queue &q) {
	float valor;
	if (!verifica_fila_cheia(q)) {
		cout << "\nDigite o valor a ser enfileirado." << endl;
		cin >> valor;
		q.fim++;//incrementa o final da fila
		q.f[q.fim] = valor; //atribuo valor ao elemento fim (porque já foi incrementado)
	}
	else {
		cout << "\nFila cheia."<<endl;
	}
}

bool verifica_fila_vazia(queue &q) {
	if (q.inicio > q.fim) {
		return 1;
	}
	else {
		return 0;
	}
}

void desenfileira(queue &q) {
	if(!verifica_fila_vazia(q)){
		cout << "\nValor Removido: " << q.f[q.inicio] << endl; //exibe o valor a ser removido
		q.inicio++;//incrementa o inicio da fila.
	}
	else {
		cout << "\nFila vazia." << endl;
		q.inicio = 0;
		q.fim = -1;
	}
}