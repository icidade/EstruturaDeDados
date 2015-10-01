#include "stdafx.h"
#define TAM 10
using namespace std;
/*
inicializa()			init()
empilhar()				push()
desempilhar()			pop()
acesssoTopo()			top()
verificaPilhaCheia()	isFull()
verificaPilhaVazia()	isEmpty()
*/

void pilha() {
	//inicializacao
	int topo = -1, val, p[TAM], resp, op;
	do {
		cout << "\n1 - Inserir um valor na pilha" << endl;
		cout << "\n2 - Remover um valor da pilha" << endl;
		cout << "\n3 - sair" << endl;
		cout << "\nOpcao: ";
		cin >> op;
		system("cls");
		switch (op) {
		case 1:	cout << "\nDigite o valor a ser empilhado";
				cin >> val;
				empilha(p, topo, val);
				break;
		case 2: resp = desempilha(p, topo, val);
				if (resp == 0) {
					cout << "\nATENCAO! LISTA VAZIA" << endl;
				}
				else {
					cout << "\nValor removido: " << val << endl;
				}
				break;
		case 3:	cout << "\nPrograma basico de pilha" << endl;
				break;
		default: cout << "\nOpcao invalida!\n" << endl;

		}
	} while (op != 3);
}

void empilha(int p[], int &topo, int val) {
	if (topo == TAM - 1) {
		cout << "\nATENCAO! PILHA CHEIA" << endl;
	}
	else {
		topo++; //atualiza topo
		p[topo] = val;//pilha recebe o valor
	}
}

int desempilha(int p[], int &topo, int &val) {
	if (topo == -1) {
		return 0;
	}
	else {
		val = p[topo]; // guarda o valor do topo
		topo--; // atualiza (decrementa) o topo da pilha
		return 1; //sucesso
	}
}