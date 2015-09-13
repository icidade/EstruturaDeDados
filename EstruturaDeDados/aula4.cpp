#include "stdafx.h"
using namespace std;

/*
O for mais externo itera at� a pen�ltima posi��o.
o for mais interno compara se o pr�ximo � maior que o atual e vai incrementando
� o m�todo que tem menos movimentos, mas sempre ordena
*/
void selection_sort(int v[], int tam) {
	
	int i,j,aux,temp;

	cout << "\n\nVetor antes da ordenacao por selecao: " << endl;
	for (i=0; i < tam; i++) {
		cout << v[i] << " ";
	}
	////////////////  SELECTION SORT   //////////////////////
	for (i=0; i < tam - 1; i++) {
		aux = i;
		for (int j = i+1; j < tam; j++)
			if (v[aux] > v[j])
				aux = j;
		temp = v[aux];
		v[aux] = v[i];
		v[i] = temp;
	}
	////////////////  SELECTION SORT   //////////////////////
	
	cout << "\nVetor depois da ordenacao por selecao: " << endl;
	for (i = 0; i < tam; i++) {
		cout << v[i] << " ";
	}
	cout << "\n\n";
}

/*
o for mais externo itera at� a �ltima posi��o e come�a na segunda
o for mais interno compara se o anterior � menor que o atual, e vai decrementando
� o melhor m�todo, s� ordena quando necess�rio, mas � o que tem mais movimentos
*/
void insertion_sort(int v[], int tam) {

	int i, j, aux, temp;

	cout << "\n\nVetor antes da ordenacao por insercao: " << endl;
	for (i = 0; i < tam; i++) {
		cout << v[i] << " ";
	}

	////////////////  INSERTION SORT   //////////////////////
	for (i = 1; i < tam; i++) {
		aux = v[i];
		for (j = i; j > 0 && aux < v[j - 1]; j--) {
			v[j] = v[j - 1];
		}
		v[j] = aux;
	}
	////////////////  INSERTION SORT   //////////////////////

	cout << "\nVetor depois da ordenacao por insercao: " << endl;
	for (i = 0; i < tam; i++) {
		cout << v[i] << " ";
	}
	cout << "\n\n";

}

/*
o for mais interno come�a na primeira posi��o
o for mais externo come�a na �ltima posi��o
� o m�todo mais simples, mais lento e o pior dos tr�s
*/
void bubble_sort(int v[], int tam) {

	int i, j, aux, temp;

	cout << "\n\nVetor antes da ordenacao por bolha: " << endl;
	for (i = 0; i < tam; i++) {
		cout << v[i] << " ";
	}
	////////////////  BUBBLE SORT   //////////////////////
	for (i = 0; i < tam - 1; i++) {
		aux = i;
		for (int j = tam - 1; j > i; j--)
			if (v[j] < v[j - 1]) {
				aux = v[j];
				v[j] = v[j - 1];
				v[j - 1] = aux;
			}
	}
	////////////////  BUBBLE SORT   //////////////////////

	cout << "\nVetor depois da ordenacao por Bolha: " << endl;
	for (i = 0; i < tam; i++) {
		cout << v[i] << " ";
	}
	cout << "\n\n";
}