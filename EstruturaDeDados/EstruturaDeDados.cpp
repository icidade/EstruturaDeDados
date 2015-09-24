// EstruturaDeDado.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

using namespace std;

int funcao(float v[], float vl, int n)
{
	for (int i = 0; i < n; i++)
		if (v[i] == vl)
			return i;
	return -1;
}

struct cadastro_endereco {
	char nome[20]; //guarda o nome da filial
	float latitude; // guarda a latitude da loja
	float longitude; // guarda a longitude da loja
} favorito[5];

void preenche_lista(cadastro_endereco favs[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nFavorito " << i + 1;
		cout << "\n\tNome: ";cin>> favs[i].nome;
		cout << "\n\tLatitude: ";cin>> favs[i].latitude;
		cout << "\n\tLongitude: ";cin>> favs[i].longitude;
	}
}

void exibe_lista(cadastro_endereco favs[], int n) {
	cout << "\nExibindo itens da lista de favoritos" << endl;
	for (int i = 0; i < n; i++) {
		cout << "\nFavorito " << i + 1;
		cout << "\n\tNome: " << favs[i].nome;
		cout << "\n\tLatitude: " << favs[i].latitude;
		cout << "\n\tLongitude: " << favs[i].longitude;
	}
	cout << "\n\n";
}

int main() {
	
	preenche_lista(favorito, 5);
	exibe_lista(favorito, 5);

	system("pause");
}