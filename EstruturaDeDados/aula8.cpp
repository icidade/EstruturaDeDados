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

void exemplo_insere_na_frente(){
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

void lista_encadeada_inserindo_na_frente(){
	int c;
	nodo *lista = NULL;

	//primeiro nodo
	lista = insere_frente(lista, 23);
	//segundo nodo
	lista = insere_frente(lista, 13);
	//terceiro nodo
	lista = insere_frente(lista, 15);
	//quarto nodo
	lista = insere_frente(lista, 18);

	//listando
	c = 1;
	cout << "\n\nUsando uma estrutura de repeticao\n";
	while (lista){
		cout << "\nValor do " << c << "o nodo: " << lista->num;
		lista = lista->prox; //pontera para o proximo nodo.
		c++;
	}

	//liberando
	delete lista; lista = 0;
	cout << "\n\n";
}

nodo * insere_frente(nodo * ptr, int valor){
	nodo *temp = new nodo;
	temp->num = valor;
	temp->prox = ptr;
	return temp;
}

int menuListaEncadeada()
{
	int c, op, valor, pos, nvalor, resp;
	nodo *lista = NULL;
	do
	{
		system("cls");
		system("color f1");
		cout << "\n\n< < < Alocacao Dinamica < < <";
		cout << "\n< <";
		cout << "\n< 1- Insere Frente - Lista <";
		cout << "\n< 2- Insere Fim - Lista <";
		cout << "\n< 3- Remove Frente - Lista <";
		cout << "\n< 4- Remove Fim - Lista <";
		cout << "\n< 5- Exibe Lista <";
		cout << "\n< 6- Substitui No na Lista <";
		cout << "\n< 7- Conta Nos da Lista <";
		cout << "\n< 8- Busca na Lista <";
		cout << "\n< 9- Libera Lista <";
		cout << "\n< 10- Sai <";
		cout << "\n< Opcao: <";
		cout << "\n< <";
		cout << "\n< < < < < < < < < < < < < < < <\n";
		cin >> op;
		system("cls");
		system("color 1f");
		switch (op)
		{
		case 1:cout << "\nInserir na frente: ";
			cin >> valor;
			lista = insereFrente(lista, valor);
			break;

		case 2:cout << "\nInserir no final: ";
			cin >> valor;
			lista = insereFim(lista, valor);
			break;

		case 3:if (!lista)
			cout << "\n\nNada a remover. Fila vazia\n";
			   else
			   {
				   lista = removeFrente(lista);
				   cout << "\n\nPrimeiro elemento da Fila removido\n";
			   }
			   break;

		case 4:if (!lista)
			cout << "\n\nNada a remover. Fila vazia\n";
			   else
			   {
				   lista = removeFim(lista);
				   cout << "\n\nUltimo elemento da Fila removido\n";
			   }
			   break;

		case 5:if (!lista)
			cout << "\n\nFILA vazia\n";
			   else
				   exibe(lista);
			break;
		case 6:if (!lista)
			cout << "\nFila vazia\n";
			   else
			   {
				   cout << "\nQual a posicao do No? ";
				   cin >> pos;
				   while (pos>contaNos(lista))
				   {
					   cout << "\nPosicao Invalida\n";
					   cout << "\nQual a posicao do No? ";
					   cin >> pos;
				   }
				   cout << "\nQual o novo valor? ";
				   cin >> nvalor;
				   substituiNo(lista, pos, nvalor);
				   cout << "\nValor substituido\n";
			   }
			   break;

		case 7:if (!lista)
			cout << "\n\nFILA vazia\n";
			   else
				   cout << "\nTotaL de nos: " << contaNos(lista);
			break;

		case 8:if (!lista)
			cout << "\n\nFILA vazia\n";
			   else
			   {
				   cout << "\nQual o valor de procura? ";
				   cin >> valor;
				   resp = buscaSequencial(lista, valor);
				   if (resp == 1)
					   cout << "\nEncontrei\n";
				   else
					   cout << "\nNao Encontrei\n";

			   }
			   break;
		case 9:if (lista)
			cout << "\nTem elementos na Lista\n";
			   else
			   {
				   libera(lista);
				   cout << "\nLiberando Memoria";
			   }
			   break;

		case 10: cout << "Fechando Lista Encadeada\n";
			break;

		default:cout << "\nOpcao Invalida\n";
		}
		cout << "\n\n";
		system("pause");
	} while (op != 10);
	return 0;
}
nodo* insereFrente(nodo *ptr, int valor)
{
	nodo *temp = new nodo;
	if (!temp)
	{
		cout << "\nNao foi possivel fazer Alocacao\n";
		system("pause");
		exit(1);
	}
	temp->num = valor;
	temp->prox = ptr;
	return temp;
}
nodo* insereFim(nodo *ptr, int valor)
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
	if (!ptr)
		ptr = novo;
	else
	{
		aux = ptr;
		while (aux->prox)
			aux = aux->prox;
		aux->prox = novo;
	}
	return ptr;
}
void exibe(nodo *ptr)
{
	cout << "\nListando\n";
	while (ptr)
	{
		cout << "\n" << ptr->num;
		ptr = ptr->prox;
	}
}
nodo *removeFrente(nodo *ptr)
{
	nodo *aux;
	aux = ptr;
	ptr = ptr->prox;
	delete aux;
	return ptr;
}
nodo* removeFim(nodo *ptr)
{
	nodo * aux, *ultimo;
	if (!ptr->prox)
	{
		delete ptr;
		ptr = NULL;
		return ptr;
	}
	else
	{
		aux = ptr;
		while (aux->prox->prox) //aux caminha até apontar para o penultimo nó
			aux = aux->prox;
		ultimo = aux->prox;
		delete ultimo;
		aux->prox = NULL;
		return ptr;
	}
}
void substituiNo(nodo *ptr, int posicao, int novoValor)
{
	int conta = 1;
	while (conta != posicao)
	{
		ptr = ptr->prox;
		conta++;
	}
	ptr->num = novoValor;

}
int contaNos(nodo *ptr)
{
	int conta = 0;
	while (ptr)
	{
		conta++;
		ptr = ptr->prox;
	}
	return conta;
}
int buscaSequencial(nodo *ptr, int valor)
{
	while (ptr)
	{
		if (ptr->num == valor)
			return 1;
		ptr = ptr->prox;
	}
	return 0;
}
void libera(nodo *ptr)
{
	delete ptr; ptr = 0;
}