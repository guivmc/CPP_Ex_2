// ExDeSexta2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

void transcript(std::string &input)
{
	for (int i = 0; i < input.size(); i++)
	{
		char aux = input.at(i);
		switch (aux)
		{
		case 'A':
		case 'B':
		case 'C':
			input[i] = '2';
			break;
		case 'D': 
		case 'E' :
		case 'F':
			input[i] = '3';
			break;
		case 'G': 
		case 'H':
		case 'I':
			input[i] = '4';
			break;
		case 'J':
		case 'K':
		case 'L':
			input[i] = '5';
			break;
		case 'M':
		case 'N':
		case 'O':
			input[i] = '6';
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			input[i] = '7';
			break;
		case 'T':
		case 'U':
		case 'V':
			input[i] = '8';
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			input[i] = '9';
			break;
		default:
			break;
		}
	}
}

int main()
{
	std::string input = "";

	while (input.compare("0000"))
	{
		std::getline(std::cin, input);

		transcript(input);

		std::cout << input + "\n";
	}

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
