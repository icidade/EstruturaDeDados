#pragma once
#include "stdafx.h"
using namespace std;
void vetor();
int montaMenu();
void menu(char [40], int &);

void vetor() {
	int vetor[5] = { 3,5,6,7,4 };
	cout << "\nEndereco e valor da posicao 1 do vetor: " << &vetor[0] << "\t" << vetor[0] << endl;
	cout << "\nEndereco e valor da posicao 2 do vetor: " << &vetor[1] << "\t" << vetor[1] << endl;
	cout << "\nEndereco e valor da posicao 3 do vetor: " << &vetor[2] << "\t" << vetor[2] << endl;
	cout << "\nEndereco e valor da posicao 4 do vetor: " << &vetor[3] << "\t" << vetor[3] << endl;
	cout << "\nEndereco e valor da posicao 5 do vetor: " << &vetor[4] << "\t" << vetor[4] << endl;
	cout << "\nEndereco do vetor: " << &vetor << endl;
	cout << "\nVetor: " << vetor << "\n";
	system("pause");
}
int montaMenu() {
	char nome[40];
	int esc;
	system("color 1e");
	system("cls");
	do {
		menu(nome, esc);
		switch (esc) {
		case 0: cout << "\nsaindo...\n";
			break;
		default:
			menu(nome, esc);
			break;
		}
	} while (esc != 0);
	return esc;
}

void menu(char nome[40], int &esc) {
	system("cls");
	cout << "\nDigite um nome: ";
	cin >> nome;
	system("cls");
	cout << "Voce digitou: " << nome << "\n";
	cout << "Digite qualquer numero para continuar ou 0 para sair \n";
	cin >> esc;
}