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