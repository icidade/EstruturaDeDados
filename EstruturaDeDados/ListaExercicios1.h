#pragma once
#include "stdafx.h"

using namespace std;

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

int x = 20;

void mainListaExercicios1() {
	int numero = 10, outroNumero;

	test1(numero);
	cout << "valor de numero apos test1 = " << numero << endl;
	cout << "x = " << x << endl;

	test2(numero);
	cout << "valor de numero apos test2 = " << numero << endl;
	cout << "x = " << x << endl;

	outroNumero = test3(numero);
	cout << "valor de outro numero apos test3 = " << outroNumero << endl;
	cout << "x = " << x << endl;

	system("pause");
}

void test1(int numero) {
	numero = numero + x;
	x++;
}
void test2(int &numero) {
	int valor = 100;
	numero = numero + valor;
	x++;
}
int test3(int n) {
	int valor = 200;
	n = n + valor;
	x--;
	return n;
}

int calculaFatorial(int n) {
	int retorno = 1;
	for (int i = 1; i <= n ; i++)
	{
		retorno = retorno * i;
	}
	return retorno;
}

void testaPrimo() {
	bool retorno = true;
	int x;

	cout << "digite um numero para saber se e primo: ";
	cin >> x;

	for (int i = x - 1; i > 1; i--)
	{
		if (x % i == 0) {
			retorno = false;
			break;
		}
	}
	if (retorno) {
		cout << "\ne primo" << endl;
	}
	else {
		cout << "\nnao e primo" << endl;
	}
	system("pause");
}

int testaVogal(char x) {
	int result = 0;
	if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U') {
		result = 1;
	}
	return result;
}

int calculaCombinacoes(int n, int p) {
	return calculaFatorial(n) / calculaFatorial(n - p) * calculaFatorial(p);
}

void calculaCombinacoes() {
	int n, p;
	do {
		cout << "\n Digite n para calcular combinacoes de n elementos p a p" << endl;
		cin >> n;
		if (n <= 0) cout << "\n n precisa ser positivo!" << endl;
	} while (n <= 0);
	do {
		cout << "\n Digite p para calcular combinacoes de n elementos p a p" << endl;
		cin >> p;
		if (p <= 0) cout << "\n p precisa ser positivo!" << endl;
	} while (p <= 0);
	cout << calculaCombinacoes(n, p) << " combinacoes" << endl;
}

void calcularProdutoInterno() {
	int n, TAM=10, x[10], y[10], produtoIterno = 0;
	cout << "CALCULA PRODUTO INTERNO" << endl;
	do {
		cout << "digite o numero da dimensao do vetor: ";
		cin >> n;
		if (n > TAM) {
			cout << "O tamanho maximo e: " << TAM << endl;
		}
	} while (n > TAM);

	preencheVetor(x, n, "primeiro");
	preencheVetor(y, n, "segundo");

	for (int i = 0; i < n; i++)
	{
		produtoIterno = produtoIterno + x[i] * y[i];
	}

	cout << "Produto interno: " << produtoIterno << endl;
}

void preencheVetor(int vet[], int n, char nomeVetor[]) {
	for (int i = 0; i < n; i++)
	{
		cout << "digite o valor da posicao " << i + 1 << " do " << nomeVetor << " vetor: ";
		cin >> vet[i];
	}
}

void cifraMensagem() {
	int tamanho = 40, ttt, i=0;
	char msg[40], repchar;
	cout << "Digite uma mensagem: ";
	cin.getline(msg, 40);
	cout << "Digite um caracter para ser ocultado na mensagem: ";
	cin >> repchar;
	ttt = replace(msg, tamanho, repchar);
	cout << "Sua mensagem cifrada: ";
	for (; i < tamanho; i++)
	{
		cout << msg[i];
	}
	cout << "\n Foram removidas " << ttt << " ocorrencias do caracter " << repchar << endl;
}

int replace(char msg[], int &tamanhoMsg, char &repChar) {
	int totalTrocas = 0, i = 0;
	for (; i < tamanhoMsg; i++) {
		if (msg[i] == repChar) {
			msg[i] = '*';
			totalTrocas++;
		}
	}
	return totalTrocas;
}