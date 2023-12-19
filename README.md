# mini-calculator
(PT-BR) Apenas um pequeno protótipo de calculadora feito em c++ | (EN) Just a small calculator prototype made in c++

# (EN)
# Simple Mathematical Calculator in C++

## Description

This is a prototype of a simple mathematical calculator implemented in C++. The calculator supports basic operations such as addition, subtraction, multiplication, division, modulus, square root, power, and absolute value. The program operates exclusively with integers.

## Code Structure

The code utilizes a structure (struct) named `numbersCal` to store information related to numbers and operations. The main program is contained within the `main()` function. Here are some key points of the code:

- **Initial Configuration:**
  - The `<locale>` library is used to configure the locale, ensuring the correct display of special characters.
  - A structure `numbersCal` is declared to store variables related to calculations.

- **Main Loop:**
  - The program uses a while loop (`while(calCulo.going)`) to allow the user to perform multiple consecutive operations.

- **Presentation of Operations:**
  - The program displays available operations through a `for` loop that iterates over the `calCulo.nomeOperacoes` vector.

- **User Input:**
  - The user is prompted to choose an operation by entering the corresponding number.
  - It checks if the entered number is among the valid options using `std::find`.

- **Execution of Operation:**
  - A switch-case is used to perform the chosen operation based on the value of `calCulo.operation`.
  - Division by zero is treated as a special condition.
  - Results are displayed according to the performed operation.

- **Continuation or Program Termination:**
  - After each operation, the user is asked if they want to perform another one.
  - The loop continues until the user decides to end the program.

## Notes

This code is a simple prototype and will be enhanced with additional features and more robust error handling. Currently, there is no executable available.

----------------------------------------------------------------------------------------------------------------------------------------

# (PT-BR)
# Calculadora Matemática Simples em C++

## Descrição

Este é um protótipo de uma calculadora matemática simples implementada em C++. A calculadora suporta operações básicas como adição, subtração, multiplicação, divisão, módulo, raiz quadrada, potência e valor absoluto. O programa funciona apenas com números inteiros.

## Estrutura do Código

O código utiliza uma estrutura (struct) chamada `numbersCal` para armazenar informações relacionadas aos números e operações. O programa principal está contido na função `main()`. Aqui estão alguns pontos-chave do código:

- **Configuração inicial:**
  - A biblioteca `<locale>` é utilizada para configurar a localidade, permitindo a exibição correta de caracteres especiais.
  - É declarada uma estrutura `numbersCal` para armazenar variáveis relacionadas aos cálculos.

- **Loop principal:**
  - O programa utiliza um loop while (`while(calCulo.going)`) para permitir que o usuário realize várias operações consecutivas.

- **Apresentação das Operações:**
  - O programa exibe as operações disponíveis através de um loop `for` que percorre o vetor `calCulo.nomeOperacoes`.

- **Entrada do Usuário:**
  - O usuário é solicitado a escolher uma operação digitando o número correspondente.
  - Verifica se o número digitado está entre as opções válidas usando `std::find`.

- **Realização da Operação:**
  - Um switch-case é utilizado para realizar a operação escolhida com base no valor de `calCulo.operation`.
  - A divisão por zero é tratada como uma condição especial.
  - Resultados são exibidos de acordo com a operação realizada.

- **Continuação ou Término do Programa:**
  - Após cada operação, o usuário é perguntado se deseja realizar outra.
  - O loop continua até que o usuário decida encerrar o programa.

## Observações

Este código é um protótipo simples e será aprimorado com mais recursos adicionais e um tratamento de erros mais robusto. Por enquanto, não haverá um executável.
