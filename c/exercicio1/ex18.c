#include <stdio.h>
// 18. Faca um programa que mostre ao usuario um menu com 4 opcoes de operacoes matematicas
// O usuario escolhe uma das opcoes e o seu programa entao pede dois valores numericos e 
// realiza a operacao, mostrando o resultado e saindo.

int main()
{

    //declarando variaveis que vão ser utilizadas ao decorrer do codigo
    int inputOperacao;
    int resultadoOperacao;
    int inputPrimeiroNumero;
    int inputSegundoNumero;

    //Apresentando opções para o usuário e solicitando operação
    printf("Escolha a operação matematica:\n1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n");
    scanf("%d", &inputOperacao);
    // 1-Soma | 2-Subtração | 3-Divisão | 4-Multiplicação


    //Solicitando numeros inteiros para realizar a operação
    printf("Digite o primeiro numero:\n");
    scanf("%d", &inputPrimeiroNumero);
    printf("Digite o segundo numero:\n");
    scanf("%d", &inputSegundoNumero);



    //switch case responsavel pela seleção de operação
    switch (inputOperacao)
    {
    case 1:
        resultadoOperacao = inputPrimeiroNumero + inputSegundoNumero;
        break;

    case 2:
        resultadoOperacao = inputPrimeiroNumero - inputSegundoNumero;
        break;

    case 3:
        resultadoOperacao = inputPrimeiroNumero / inputSegundoNumero;
        break;

    case 4:
        resultadoOperacao = inputPrimeiroNumero * inputSegundoNumero;
        break;

    default:
        break;
    }
    printf("O resultado eh:%d", resultadoOperacao);
}