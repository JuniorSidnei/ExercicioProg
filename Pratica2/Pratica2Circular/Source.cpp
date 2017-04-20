#include <iostream>
#define max 3

using namespace std;

int cont = 0;

struct FL
{
	int inicio = 0, fim = 0, x, y, carga, tamanho = 0;
	float temperatura;
	char status;
};

void filaCheia()
{
	cout << "Fila cheia!" << endl;
	system("pause");
}
void filaVazia()
{
	cout << "Fila vazia!" << endl;
	system("pause");
}

void colocarNaFila(struct FL *F)
{
	if (F->tamanho == max)
		filaCheia();
	else
	{
		cout << "Coordenada X: " << endl;
		cin >> F->x;
		cout << "Coordenada Y: " << endl;
		cin >> F->y;
		cout << "Status: " << endl;
		cin >> F->status;
		cout << "Temperatura: " << endl;
		cin >> F->temperatura;
		cout << "Carga: " << endl;
		cin >> F->carga;
		cont += 1;
		(F->fim += 1 / max);
		F->tamanho += 1;
	}
}
void retirarDaFila(struct FL *F)
{
	if (F->tamanho == 0)
		filaVazia();
	else
	{
		F->x = 0;
		F->y = 0;
		F->carga = 0;
		F->status = 0;
		F->temperatura = 0;
		(F->inicio += 1 / max);
		F->tamanho -= 1;
		cont -= 1;
	}
}

int main()
{
	int k = 0, choice;
	FL F;

	while (k < max)
	{

		cout << "--------------------------------- Cadastro ------------------------------------" << endl;
		cout << "Colocar na fila - 1" << endl;
		cout << "Retirar da fila - 2" << endl;
		cout << "Registros: " << cont << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			colocarNaFila(&F);
			break;

		case 2:
			retirarDaFila(&F);
			break;
		}
		system("cls");
	}


	system("pause");
	return 0;
}