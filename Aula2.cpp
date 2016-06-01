//Teste de Força.

//Incluindo nas bibliotecas.
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	//Declarando variáveis.
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int a1 = 4, a2 = 4;
	int d1 = 1, d2 = 1;

	//Perguntando na tela o nome do jogador 1.
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	//Perguntando na tela o nome do jogador 2.
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	//Enquanto 
	while (sair == false)
	{
		//Caractere dos Jogadores 1 e 2.
		cout << " O			   O" << endl;
		cout << ".T./		         \\.T." << endl;
		cout << " ^			   ^" << endl;
		cout << jog1 << "	               " << jog2 << endl;

		//Para o primeiro jogador.
		int dado1;
		int dadof1;
		int dano1;

		//Adiciona uma "semente" ao gerador de números.
		srand((int)time(0));
		//Gera um número aleatótio entre 1 e 6.
		dado1 = rand() % 6 + 1;
		dadof1 = dado1;


		//Se o dado cair mais que 4.
		if (dadof1 >= 4)
		{
			//Imprimindo na tela uma informação de acerto do Jogador 1.
			cout << "\Acertou";
			//Calculando o dano da vida do Jogador 1.
			dano1 = a2 - d1;
			vida1 = vida1 - dano1;

			cout << "\Dano: -" << dano1 << endl;
		}

		//Para o segundo jogador.
		int dado2;
		int dadof2;
		int dano2;

		//Adiciona uma "semente" ao gerador de números.
		srand((int)time(0));
		//Gera um número aleatótio entre 1 e 6.
		dado2 = rand() % 6 + 1;
		dadof2 = dado2;

		//Se o número lançado for maior ou igual que 4 o jogador acerta.
		if (dadof2 >= 4)
		{
			//Imprimindo na tela uma informação de acerto do Jogador 2.
			cout << "                        Acertou! ";
			//Calculando o dano da vida do Jogador 2.
			dano2 = a1 - d2;
			vida2 = vida2 - dano2;
			cout << "\Dano: -" << dano2 << endl;
		}

		//Imprimindo informações dos Jogadores na tela.
		cout << "A:" << a1 << "                    " << "A:" << a2 << endl;
		cout << "D:" << d1 << "                    " << "D:" << d2 << endl;
		cout << "Vida:" << vida1 << "               " << "Vida:" << vida2 << endl;
		system("Pause");

		//Caso a vida do Jogador 1 ou 2 chegar a ser zero (0) a tela será fechada. 
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;

		}
		//Caso contrário, se não chegar a ser zero (0) de nenhum dos jogadores, o jogo continuará rodando.
		else system("cls");

		cout << "Um dos Jogadores não resistiu aos ferimentos :(" << endl;
		
		//Estabelecendo uma condição sobre a vida dos Jogadores 1 e 2 forem menores que zero (0), imprimindo na tela a informação de que ambos perderam.
		if (vida1 && vida2 < 0) cout << "Game Over!" << endl;
	}
	return 0;
}