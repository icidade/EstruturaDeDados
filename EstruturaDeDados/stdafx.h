// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <tchar.h>
#include <cctype>
#include <iostream>


// TODO: reference additional headers your program requires here

using namespace std;
void vetor();
int montaMenu();
void menu(char[40], int &);

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