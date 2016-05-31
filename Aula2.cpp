//Teste de Força.
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int a1 = 4, a2 = 4;
	int d1 = 1, d2 = 1;

	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	while (sair == false)
	{
		cout << " O			   O" << endl;
		cout << ".T./		         \\.T." << endl;
		cout << " ^			   ^" << endl;
		cout << jog1 << "	               " << jog2 << endl;

		//Para o primeiro jogador 
		int dado1;
		int dadof1;
		int dano1;

		//Adiciona uma "semente" ao gerador de números
		srand((int)time(0));
		//Gera um número aleatótio entre 1 e 6
		dado1 = rand() % 6 + 1;
		dadof1 = dado1;


		//Se o dado cair mais que 4
		if (dadof1 >= 4)
		{
			cout << "\Acertou!:) ";
			dano1 = a2 - d1;
			vida1 = vida1 - dano1;

			cout << "\Dano: -" << dano1 << endl;
		}

		//Para o segundo jogador
		int dado2;
		int dadof2;
		int dano2;

		//Adiciona uma "semente" ao gerador de números
		srand((int)time(0));
		//Gera um número aleatótio entre 1 e 6
		dado2 = rand() % 6 + 1;
		dadof2 = dado2;

		//Se cair 4
		if (dadof2 >= 4)
		{
			cout << "                        Acertou! :)";
			dano2 = a1 - d2;
			vida2 = vida2 - dano2;
			cout << "\Dano: -" << dano2 << endl;
		}

		//imprimindo informações na tela
		cout << "A:" << a1 << "                    " << "A:" << a2 << endl;
		cout << "D:" << d1 << "                    " << "D:" << d2 << endl;
		cout << "Vida:" << vida1 << "               " << "Vida:" << vida2 << endl;
		system("Pause");

		//Se sair não limpar a tela
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;

		}
		else system("cls");
		cout << "Boa Sorte!" << endl;
		if (vida1 && vida2 < 0) cout << "Game Over!" << endl;
	}
	return 0;
}