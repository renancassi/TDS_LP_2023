#include <stdio.h>
// 6. Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,  ́
// assim como a diferenc ̧a existente entre ambos.
int main()
{
    int inputPrimeiroNumero;
    int inputSegundoNumero;

    printf("Escreva o primeiro numero\n");
    scanf("%d", &inputPrimeiroNumero);
    printf("Escreva o Segundo numero\n");
    scanf("%d", &inputSegundoNumero);

    if (inputPrimeiroNumero > inputSegundoNumero)
    {
        printf("O maior eh o primeiro numero: %d\n", inputPrimeiroNumero);
        printf("A diferença entre os 2 eh: %d\n", inputPrimeiroNumero-inputSegundoNumero);
    } else if (inputPrimeiroNumero < inputSegundoNumero)
    {
        printf("O maior eh o Segundo numero: %d\n", inputSegundoNumero);
        printf("A diferença entre os 2 eh: %d\n", inputSegundoNumero-inputPrimeiroNumero);
    } else if (inputPrimeiroNumero == inputSegundoNumero) {
        printf("Os numeros são iguais");
    }
        
}