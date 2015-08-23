// EstruturaDeDado.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

void montaMenu();
void menu(char[40]);
void vetor();

int main()
{
	//vetor();
	
}

void montaMenu() {
	void menu(char nome[40]);
	char nome[40];
	cout << &nome;
	cin.get();
	int esc;
	do {
		menu(nome);
		cin >> esc;
		switch (esc) {
		case 0: cout << "\nsaindo...";
			break;
		default:
			break;
		}
	} while (esc != 0);
	system("pause");
}

void menu(char nome[40]) {
	system("cls");
	system("color 1e");
	cout << "\nDigite um nome: ";
	cin.getline(nome, 40);
	system("cls");
	cout << "Voce digitou: " << nome;

	cout << "\n digite qualquer tecla para continuar ou 0 para sair";
}

void vetor() {
	int vetor[5] = { 3,5,6,7,4 };
	cout << "\nEndereco da posicao 1 do vetor: " << &vetor[0] << endl;
	cout << "\nValor da posicao 1 do vetor: " << vetor[0] << endl;
	cout << "\nEndereco do vetor: " << &vetor << endl;
	cout << "\nVetor: " << vetor<<"\n";
	system("pause");
}

