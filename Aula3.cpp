//Jogo de Corrida.

//Incluindo nas bibliotecas.
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//Identificando Super Power.
void imprimir_espacos(int total);  

int main(int argc, char* args[])

{
	bool sair = false;

	//Declarando Variáveis.
	string jog1, jog2;
	string corrida;
	int total1 = 0, total2 = 0;
	int total_espacos = 30;

	//Imprimindo na tela.
	cout << "<----Welcome to the Game---->" << endl;

	//Perguntando o nome do primeiro Jogador.
	cout << "Digite o nome do Jogador 1:" << endl;
	cin >> jog1;

	//Perguntando o nome do segundo Jogador.
	cout << "Digite o nome do Jogador 2:" << endl;
	cin >> jog2;

	for (int rodada = 0; rodada < total_espacos; rodada++)
	{
		//Cálculo necessário para o número aleatório.
		srand((int)time(0));
		//Total de espaços da pista do Jogo de Corrida.
		int total_espacos = 30;

		//Fazendo o cálculo para gerar um número aleatório para o Jogador 1.
		total_espacos = rand() % 3 + 1;
		total1 = total1 + total_espacos;

		//Fazendo o cálculo para gerar um número aleatório para o Jogador 2.
		total_espacos = rand() % 3 + 1;
		total2 = total2 + total_espacos;

		//Imprimindo mensagem na tela.
		cout << "<----Jogo de Corrida---->" << endl;
		cout << "                                                               ~~~~CHEGADA~~~~" << endl;


		//Imprimindo na tela o carrinho do Jogador 1.
		cout << jog1 << endl;
		imprimir_espacos(total1);
		cout << "   _   " << endl;
		imprimir_espacos(total1);
		cout << " -o-o> " << endl;
		cout << "-----------------------" << endl;

		//Imprimindo na tela a quantidade de espaços que o carrinho do Jogador 1 deve andar.
		cout << "Siga em frente: " << total1 << endl;


		//Imprimindo na tela o carrinho do Jogador 2.
		cout << jog2 << endl;
		imprimir_espacos(total2);
		cout << "   _   " << endl;
		imprimir_espacos(total2);
		cout << " -o-o> " << endl;
		cout << "-----------------------" << endl;

		//Imprimindo na tela a quantidade de espaços que o carrinho do Jogador 2 deve andar.
		cout << "Siga em frente: " << total2 << endl;

		//Limpando a tela.
		system("cls");
		
		//Condição. Se o total de espaços do Jogador 1 ou do Jogador 2 for maior ou igual que 30 a tela fechará.
		if (total1 >= 30 || total2 >= 30) 
		{
			sair = true;
		}

		//Caso prosseguir limpar a tela.
		else system("cls");


	}
	
	//Condição. Se o total de espaços do Jogador 1 for igual a 30, ele ganhará.
	if (total1 = 30) cout << "O vencedor foi  " << jog1 << endl;

	//Caso contrário, se o total de espaços do Jogador 1 for menor que 30, ele perderá.
	else if (" Você perdeu, Jog1 ")

	//Condição. Se o total de espaços do Jogador 2 for igual a 30, ele ganhará.
	if (total2 = 30) cout << "O vencedor foi  " << jog2 << endl;
	
	//Caso contrário, se o total de espaços do Jogador 2 for menor que 30, ele perderá.
	else if (" Você perdeu, Jog2 ")
		
		//Imprimindo uma mensagem na tela.
		cout << "Fim de jogo!" << endl;


		system("pause");
		//Voltando ao início do Jogo.
		return 0;
}


void imprimir_espacos(int total)
{



	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
		cout << "  ";


	}







