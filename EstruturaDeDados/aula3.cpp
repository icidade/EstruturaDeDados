#include "stdafx.h"
#define TAM 3
using namespace std;

struct coordenadas {
	int x, y;
};

struct sdata
{
	int dia, mes, ano;
};

struct cad {
	float a, b, c, d;
};

struct ficha {
	char nome[31];
	int idade;
};

struct manipulaNumeros {
	int contaAlgaritmos(int num) {
		int cont = 0;
		while (num > 0) {
			cont++;
			num /= 10;
		}
		return(cont);
	}
	void quocresto(int a, int b) {
		int aux;
		if (a > b) { aux = a, a = b, b = aux; }
		cout << "\nQuociente " << a / b;
		cout << "\nResto " << a % b;
	}
};

void exemplo_struct_fora_do_main() {
	coordenadas a = { 5,3 };
	coordenadas b;
	b.x = 1;
	b.y = -4;

	cout << "\n coordenadas de a [" << a.x << ", " << a.y << "]";
	cout << "\n coordenadas de b [" << b.x << ", " << b.y << "]";
}

void exemplo_struct_dentro_main() {
	struct {
		char nome[21];
		float valor;
	}produto1 = { "martelo",15.89 }, produto2 = { "furadeira",189.90 };

	cout << "\n produto 1:" << produto1.nome << ":\t" << produto1.valor;
	cout << "\n produto 2:" << produto2.nome << ":\t" << produto2.valor;

}

void exemplo_troca_strings() {
	char auxC[21], nomeProduto1[21] = "martelo", nomeProduto2[21] = "furadeira";

	if (strcmp(nomeProduto1, nomeProduto2) > 0) {
		strcpy_s(auxC, nomeProduto1);
		strcpy_s(nomeProduto1, nomeProduto2);
		strcpy_s(nomeProduto2, auxC);
	}
	cout << "\n produto 1: " << nomeProduto1;
	cout << "\n produto 2: " << nomeProduto2;
}

void exemplo_atribuicao_pelo_teclado() {
	struct prod {
		char nome[21];
		float valor;
	}produto1, produto2, aux;

	cout << "\n nome do primeiro produto: ";
	cin.getline(produto1.nome, 21);
	cout << "\n valor: ";
	cin >> produto1.valor;

	cin.get();

	cout << "\n nome do segundo produto: ";
	cin.getline(produto2.nome, 21);
	cout << "\n valor: ";
	cin >> produto2.valor;

	if (strcmp(produto1.nome, produto2.nome) > 0) {
		aux = produto1;
		produto1 = produto2;
		produto2 = aux;
	}

	cout << "\n produto 1: " << produto1.nome;
	cout << "\n produto 2: " << produto2.nome;
	cout << "\n\n";

}

void exemplo_array_de_struct() {
	struct prodCad {
		int codigo;
		float precoCompra, precoVenda;
	};

	prodCad produtos[TAM];
	int x, num;

	for (x = 0; x < TAM; x++) {
		cout << "\n codigo do produto 0 a 100000: ";
		cin >> num;
		while (num < 0 || num > 10000) {
			cout << "\n valor invalido";
			cout << "\n codigo do produto 0 a 100000: ";
			cin >> num;
		}
		produtos[x].codigo = num;

		cout << "\n preco de compra:";
		cin >> produtos[x].precoCompra;
		produtos[x].precoVenda = produtos[x].precoCompra * 1.6;
	}
	system("cls");
	cout << "\ncodigo\tcompra\tvenda\n";
	for (x = 0; x < TAM; x++) {
		cout << "\n" << produtos[x].codigo << "\t" << produtos[x].precoCompra << "\t" << produtos[x].precoVenda;
	}
	cout << "\n\n";
}

void exemplo_struct_aninhado() {
	struct pagto {
		int codigo;
		float valor;
		sdata venc;
	}promissorias[2];

	int x, num;

	for (x = 0; x < TAM; x++) {
		cout << "\n codigo do pagamento 0 a 100000: ";
		cin >> num;
		while (num < 0 || num > 10000) {
			cout << "\n valor invalido";
			cout << "\n codigo do pagamento 0 a 100000: ";
			cin >> num;
		}
		promissorias[x].codigo = num;

		cout << "\n valor do pagamento:";
		cin >> promissorias[x].valor;

		cout << "\n dia do pagamento:";
		cin >> promissorias[x].venc.dia;
		cout << "\n mes do pagamento:";
		cin >> promissorias[x].venc.mes;
		cout << "\n ano do pagamento:";
		cin >> promissorias[x].venc.ano;
	}

	system("cls");
	cout << "\ncodigo\tvalor\tvencimento\n";
	for (x = 0; x < TAM; x++) {
		cout << "\n" << promissorias[x].codigo << "\t" << promissorias[x].valor << "\t" << promissorias[x].venc.dia << "/" << promissorias[x].venc.mes << "/" << promissorias[x].venc.ano;
	}
	cout << "\n\n";
}

float maior2(float n1, float n2) {
	if (n1 > n2)return n1;
	else return  n2;
}

void exemplo_struct_com_passagem_por_valor() {
	cad nums = { 23,54,78,90 };
	cout << "\nNumeros da estrutura: " << nums.a << ", " << nums.b << ", " << nums.c << ", " << nums.d << endl;
	cout << "\n\nO maior dos quatro";
	cout << "\n\t" << maior2(maior2(nums.a, nums.b), maior2(nums.c, nums.d));
	cout << "\n\n";
}

void idade2025(int &idade) {
	idade += 10;
}
void exemplo_struct_com_passagem_por_referencia() {
	ficha cadastro = { "Joselito Silva",36 };
	cout << "\nNomidade: " << cadastro.nome << ", " << cadastro.idade << " anos em 2015";
	idade2025(cadastro.idade);
	cout << "\n\nEm 2025 " << cadastro.nome << " tera " << cadastro.idade << " anos.";
	cout << "\n\n";
}

void maiuscula(char func[]) {
	for (int i = 0; func[i] != '\0'; i++) {
		func[i] = toupper(func[i]);
	}
}

void passagem_de_membro_que_e_vetor() {
	struct cadFunc {
		char nome[30];
	};

	cadFunc funcionario;
	cout << "\nInsira o nome do funcionario: ";
	cin.get(funcionario.nome, 30);
	maiuscula(funcionario.nome);
	cout << "\n\nFuncionario: " << funcionario.nome;
	cout << "\n\n";
}

void exemplo_struct_com_funcao() {
	int n1, n2;
	manipulaNumeros num;
	cout << "\nDigite um numero inteiro: ";	cin >> n1;
	cout << "\nTotal de algarismos: " << num.contaAlgaritmos(n1);
	cout << "\nDigite um numero inteiro: ";	cin >> n1;
	cout << "\nDigite outro numero inteiro: ";	cin >> n2;
	num.quocresto(n1, n2);
	cout << "\n\n";
}
