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

int main() {

	system("pause");
}