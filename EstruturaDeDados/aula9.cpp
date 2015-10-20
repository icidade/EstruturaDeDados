#include "stdafx.h"
using namespace std;
/*
Uma das vantagens de se implementar estruturas dinamicamente � o fato delas ocuparem somente o espa�o necess�rio.
*/

//Pilha Dinamica
int pilha_dinamica()
{
	int c, op, valor;
	nodo *lista = NULL;
	do
	{
		system("cls");
		system("color fc");
		cout << "\n\n= = = Alocacao Dinamica = = =";
		cout << "\n= =";
		cout << "\n= 1- Insere na Pilha =";
		cout << "\n= 2- Remove da Pilha =";
		cout << "\n= 3- Exibe elemento do topo =";
		cout << "\n= 4- Libera Pilha =";
		cout << "\n= 5- Lista Pilha - educativo =";
		cout << "\n= 6-Sai =";
		cout << "\n= Opcao: =";
		cout << "\n= =";
		cout << "\n= = = = = = = = = = = = = = = =\n";
		cin >> op;
		system("cls");
		system("color 4f");
		switch (op)
		{
		case 1:cout << "\nDigite numero: ";
			cin >> valor;
			lista = insereFrente(lista, valor);
			break;

		case 2:if (!lista)
			cout << "\n\nNada a remover. Pilha vazia\n";
			   else
			   {
				   lista = remove(lista);
				   cout << "\n\nPrimeiro elemento da Pilha removido\n";
			   }
			   break;

		case 3: exibeTopo(lista);
			break;
		case 4:if (lista)
			cout << "\nTem elementos na Pilha\n";
			   else
			   {
				   libera(lista);
				   cout << "\nLiberando Memoria";
			   }
			   break;

		case 5:if (!lista)
			cout << "\nLista vazia\n";
			   else
				   exibeLista(lista);
			break;

		case 6: cout << "Fechando PILHA Dinamica\n";
			break;

		default:cout << "\nOpcao Invalida\n";
		}
		cout << "\n\n";
		system("pause");
	} while (op != 6);
	return 0;
}
nodo* insereFrente(nodo *plista, int valor)
{
	nodo *temp = new nodo;
	if (!temp)
	{
		cout << "\nNao foi possivel fazer Alocacao\n";
		system("pause");
		exit(1);
	}
	temp->num = valor;
	temp->prox = plista;
	return temp;
}
void exibeTopo(nodo *plista)
{
	if (!plista)
		cout << "\n\nPilha vazia\n";
	else
		cout << "\nValor do elemento do topo: " << plista->num;
}
nodo *remove(nodo *plista)
{
	nodo *aux;
	aux = plista;
	plista = plista->prox;
	delete aux;
	return plista;
}
void libera(nodo *plista)
{
	delete plista; plista = 0;
}
void exibeLista(nodo *plista)
{
	cout << "\nListando\n";
	while (plista)
	{
		cout << "\n" << plista->num;
		plista = plista->prox;
	}
}


//Fila Dinamica:
int fila_dinamica()
{
	int c, op, valor;
	nodo *lista = NULL;
	do
	{
		system("cls");
		system("color f2");
		cout << "\n\n- - - Alocacao Dinamica - - -";
		cout << "\n- -";
		cout << "\n- 1- Insere na Fila -";
		cout << "\n- 2- Remove da Fila -";
		cout << "\n- 3- Exibe primeiro da Fila -";
		cout << "\n- 4- Libera Fila -";
		cout << "\n- 5- Lista Fila - educativo -";
		cout << "\n- 6- Sai -";
		cout << "\n- Opcao: -";
		cout << "\n- -";
		cout << "\n- - - - - - - - - - - - - - - -\n";
		cin >> op;
		system("cls");
		system("color 2F");
		switch (op)
		{
		case 1:cout << "\nDigite numero: ";
			cin >> valor;
			lista = insereFim(lista, valor);
			break;

		case 2:if (!lista)
			cout << "\n\nNada a remover. Fila vazia\n";
			   else
			   {
				   lista = remove(lista);
				   cout << "\n\nPrimeiro elemento da Fila removido\n";
			   }
			   break;

		case 3:if (!lista)
			cout << "\n\nFILA vazia\n";
			   else
				   exibePrimeiro(lista);
			break;
		case 4:if (lista)
			cout << "\nTem elementos na Fila\n";
			   else if (!lista)
				   cout << "\n\nFILA vazia\n";
			   else
			   {
				   libera(lista);
				   cout << "\nLiberando Memoria";
			   }
			   break;

		case 5:if (!lista)
			cout << "\nFila vazia\n";
			   else
				   exibeLista(lista);
			break;

		case 6: cout << "Fechando FILA Dinamica\n";
			break;

		default:cout << "\nOpcao Invalida\n";
		}
		cout << "\n\n";
		system("pause");
	} while (op != 6);
	return 0;
}
nodo *insereFim(nodo *plista, int valor)
{
	nodo *novo, *aux;
	novo = new nodo;
	if (!novo)
	{
		cout << "\nNao foi possivel fazer Alocacao\n";
		system("pause");
		exit(1);
	}
	novo->num = valor;
	novo->prox = NULL;
	if (plista == NULL)
		plista = novo;
	else
	{
		aux = plista;
		while (aux->prox)
			aux = aux->prox;
		aux->prox = novo;
	}
	return plista;
}
void exibePrimeiro(nodo *plista)
{
	if (!plista)
		cout << "\n\nFila vazia\n";
	else
		cout << "\nValor do primeiro elemento da Fila: " << plista->num;
}
nodo *remove(nodo *plista)
{
	nodo *aux;
	aux = plista;
	plista = plista->prox;
	delete aux;
	return plista;
}
void libera(nodo *plista)
{
	delete plista; plista = 0;
}
void exibeLista(nodo *plista)
{
	cout << "\nListando\n";
	while (plista)
	{
		cout << plista->num << "\t";
		plista = plista->prox;
	}
}