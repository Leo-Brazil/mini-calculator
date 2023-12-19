#include <iostream>
#include <cmath>
#include <locale>
#include <vector>
#include <algorithm>
#include <string>

struct numbersCal {
    int num1, num2;
    int tentativas;
    std::vector<std::string> nomeOperacoes;
    std::vector<int> numOperations;
    int operation;
    bool going;
};

int main() {
    // caracteres especiais
    setlocale(LC_ALL, "");

    // struct (variáveis)
    numbersCal calCulo;
    calCulo.going = true;
    calCulo.tentativas = 0;
    calCulo.nomeOperacoes = {"Adição (1)","Subtração (2)","Multiplicação (3)", "Divisão (4)", "Modulus (5)", "Raiz quadrada (6)", "Potência (7)", "Valor Absoluto (8)"};
    calCulo.numOperations = {1, 2, 3, 4, 5, 6, 7, 8};



	while(calCulo.going){

        //std::cout << calCulo.going << std::endl;

        std::cout << "Teste de calculo matemático! (Protótipo)" <<  std::endl;
        std::cout << std::endl;

        std::cout << "Funciona apenas com números inteiros." << std::endl;
        std::cout << std::endl;

        std::cout << "Nessa mini calculadora, temos as seguintes operações: " << std::endl;
        std::cout << std::endl;

        // mostrar as operações
        for (std::string x : calCulo.nomeOperacoes)
        {
            std::cout << x << std::endl;
        }

        std::cout << std::endl;

        std::cout << "Escolha uma das operações acima que queira fazer (digite os números representantes dentro dos parênteses): ";
        std::cin >> calCulo.operation;

        // verifica se o valor digitado no "calCulo.operation" esta no vector "numOperations"
        if (std::find(calCulo.numOperations.begin(), calCulo.numOperations.end(), calCulo.operation) == calCulo.numOperations.end())
        {
            std::cout << "Apenas digite os números que estão dentro dos parênteses!" << std::endl;
            break;
        }

        std::cout << "Digite seu primeiro número: ";
        std::cin >> calCulo.num1;


        if (calCulo.operation != 6 && calCulo.operation != 8)
        {
            std::cout << "Digite seu segundo numero: ";
            std::cin >> calCulo.num2;
        }

        if (calCulo.operation)
        {
            switch (calCulo.operation)
            {
            case 1:
                std::cout << "Resultado da adição: " << calCulo.num1 + calCulo.num2 << std::endl;
                break;
            case 2:
                std::cout << "Resultado da subtração: " << calCulo.num1 - calCulo.num2 << std::endl;
                break;
            case 3:
                std::cout << "Resultado da multiplicação: " << calCulo.num1 * calCulo.num2 << std::endl;
                break;
            case 4:
                if (calCulo.num2 != 0)
                {
                    std::cout << "Resultado da divisão: " << calCulo.num1 / calCulo.num2 << std::endl;
                }
                else
                {
                    std::cout << "Divisão por zero não existe!" << std::endl;
                }
                break;
            case 5:
                std::cout << "Resultado da porcentagem: " << static_cast<int>(calCulo.num1) % static_cast<int>(calCulo.num2) << std::endl;
                break;
            case 6:
                std::cout << "Resultado da raiz quadrada de " << calCulo.num1 << " é: " << sqrt(calCulo.num1) << std::endl;
                break;
            case 7:
                std::cout << "Resultado da potência de " << calCulo.num1 << " elevado a " << calCulo.num2 << " é: " << pow(calCulo.num1, calCulo.num2) << std::endl;
                break;
            case 8:
                std::cout << "Resultado do valor absoluto de " << calCulo.num1 << " é: " << abs(calCulo.num1) << std::endl;
                break;
            default:
                std::cout << "Error: Operação errada, digite apenas a operação que esta dentro dos parênteses!" << std::endl;
                break;
            }
        }
        else
        {
            std::cout << "Error!" << std::endl;
        }


        std::string continuar;
        std::cout << "Deseja fazer outra conta? (Yes/No)" << std::endl;
        std::cin >> continuar;

        if (continuar == "Yes")
        {
            std::cout << "Continue sua conta" << std::endl << std::endl;
        }
        else if (continuar == "No")
        {

            std::cout << "Fim do programa!";
            calCulo.going = false;
            break;
        }
	}
    return 0;
}
