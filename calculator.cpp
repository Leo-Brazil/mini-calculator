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

    // struct (vari�veis)
    numbersCal calCulo;
    calCulo.going = true;
    calCulo.tentativas = 0;
    calCulo.nomeOperacoes = {"Adi��o (1)","Subtra��o (2)","Multiplica��o (3)", "Divis�o (4)", "Modulus (5)", "Raiz quadrada (6)", "Pot�ncia (7)", "Valor Absoluto (8)"};
    calCulo.numOperations = {1, 2, 3, 4, 5, 6, 7, 8};



	while(calCulo.going){

        //std::cout << calCulo.going << std::endl;

        std::cout << "Teste de calculo matem�tico! (Prot�tipo)" <<  std::endl;
        std::cout << std::endl;

        std::cout << "Funciona apenas com n�meros inteiros." << std::endl;
        std::cout << std::endl;

        std::cout << "Nessa mini calculadora, temos as seguintes opera��es: " << std::endl;
        std::cout << std::endl;

        // mostrar as opera��es
        for (std::string x : calCulo.nomeOperacoes)
        {
            std::cout << x << std::endl;
        }

        std::cout << std::endl;

        std::cout << "Escolha uma das opera��es acima que queira fazer (digite os n�meros representantes dentro dos par�nteses): ";
        std::cin >> calCulo.operation;

        // verifica se o valor digitado no "calCulo.operation" esta no vector "numOperations"
        if (std::find(calCulo.numOperations.begin(), calCulo.numOperations.end(), calCulo.operation) == calCulo.numOperations.end())
        {
            std::cout << "Apenas digite os n�meros que est�o dentro dos par�nteses!" << std::endl;
            break;
        }

        std::cout << "Digite seu primeiro n�mero: ";
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
                std::cout << "Resultado da adi��o: " << calCulo.num1 + calCulo.num2 << std::endl;
                break;
            case 2:
                std::cout << "Resultado da subtra��o: " << calCulo.num1 - calCulo.num2 << std::endl;
                break;
            case 3:
                std::cout << "Resultado da multiplica��o: " << calCulo.num1 * calCulo.num2 << std::endl;
                break;
            case 4:
                if (calCulo.num2 != 0)
                {
                    std::cout << "Resultado da divis�o: " << calCulo.num1 / calCulo.num2 << std::endl;
                }
                else
                {
                    std::cout << "Divis�o por zero n�o existe!" << std::endl;
                }
                break;
            case 5:
                std::cout << "Resultado da porcentagem: " << static_cast<int>(calCulo.num1) % static_cast<int>(calCulo.num2) << std::endl;
                break;
            case 6:
                std::cout << "Resultado da raiz quadrada de " << calCulo.num1 << " �: " << sqrt(calCulo.num1) << std::endl;
                break;
            case 7:
                std::cout << "Resultado da pot�ncia de " << calCulo.num1 << " elevado a " << calCulo.num2 << " �: " << pow(calCulo.num1, calCulo.num2) << std::endl;
                break;
            case 8:
                std::cout << "Resultado do valor absoluto de " << calCulo.num1 << " �: " << abs(calCulo.num1) << std::endl;
                break;
            default:
                std::cout << "Error: Opera��o errada, digite apenas a opera��o que esta dentro dos par�nteses!" << std::endl;
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
