// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <tchar.h>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdlib>
// TODO: reference additional headers your program requires here

using namespace std;
void vetor();
int montaMenu();
void menu(char[40], int &);

//aula 1 e 2 
void vetor();
int montaMenu();
void menu(char nome[40], int &esc);

//aula 3
void exemplo_struct_fora_do_main();
void exemplo_struct_dentro_main();
void exemplo_troca_strings();
void exemplo_atribuicao_pelo_teclado();
void exemplo_array_de_struct();
void exemplo_struct_aninhado();
float maior2(float n1, float n2);
void exemplo_struct_com_passagem_por_valor();
void idade2025(int &idade);
void exemplo_struct_com_passagem_por_referencia();
void maiuscula(char func[]);
void passagem_de_membro_que_e_vetor();
void exemplo_struct_com_funcao();

//aula 4
void selection_sort(int v[], int tam);
void insertion_sort(int v[], int tam);
void bubble_sort(int v[], int tam);

//aula 5

//aula 6
void pilha();
void empilha(int [], int&, int);
int desempilha(int p[], int &topo, int &val);

//aula 7
struct queue {
	float f[3];
	int inicio, fim;
};

void inicializa();
bool verifica_fila_cheia(queue &);
void enfileira(queue &);
void desenfileira(queue &);
bool verifica_fila_vazia(queue &);

//aula 8 - Alocacao dinamica - lista encadeada
struct data{
	int dia, mes, ano;
};
void struct_em_ponteiro();
struct cadastro{
	char nome[30];
	float nota;
};
void preenche_cadastro();
void exibe_cadastro(cadastro*);
void ponteiro_alocado_dinamicamente();
void ponteiro_e_matriz_de_estruturas();
struct nodo{
	int num;
	struct nodo* prox;
};
void cria_no();
void cria_lista_com_nodos();
void exemplo_insere_na_frente();
void lista_encadeada_inserindo_na_frente();
nodo* insere_frente(nodo *, int);
int menuListaEncadeada();
nodo *insereFrente(nodo *ptr, int valor);
nodo *insereFim(nodo *ptr, int valor);
void exibe(nodo *ptr);
nodo *removeFrente(nodo *ptr);
nodo *removeFim(nodo *ptr);
void substituiNo(nodo *ptr, int posicao, int novoValor);
int buscaSequencial(nodo *ptr, int valor);
void libera(nodo *ptr);
int contaNos(nodo *ptr);


//aula 9 - Pilhas e filas dinâmicas
//pilha dinamica:
nodo *insereFrente(nodo *plista, int valor);
void exibeTopo(nodo *plista);
void exibeLista(nodo *lista);
nodo *remove(nodo *plista);
void libera(nodo *plista);
int pilha_dinamica();
//fila dinâmica:
nodo *insereFim(nodo *plista, int valor);
void exibePrimeiro(nodo *plista);
nodo *remove(nodo *plista);
void libera(nodo *plista);
void exibeLista(nodo *plista);
int fila_dinamica();


//listaExercicios1
void test1(int);
void test2(int &);
int test3(int);
int calculaFatorial(int);
bool testaPrimo(int);
int testaVogal(char);
int calculaCombinacoes(int, int);
void calculaCombinacoes();
void calcularProdutoInterno();
void preencheVetor(int vet[], int n, char nomeVetor[]);
void cifraMensagem();
int replace(char[], int &, char &);

//listaExercicios2
struct dtContratacao {
	char dia[2];
	char mes[2];
	int ano;
};
struct funcsHP {
	int matricula;
	dtContratacao dtentrada;
	char cargo[20];
};

void notas_ginastas();
void procura_funcionarios_mais_de_10_anos(funcsHP f[], int x);
void lista_funcionarios(funcsHP f[], int x);
void funcionarios_empresa_de_impressoras();