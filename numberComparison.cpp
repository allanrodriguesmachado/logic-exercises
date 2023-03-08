/*
    Program that asks for two numbers and prints the larger one.
*/
#include <iostream>

using namespace std;

int main() 
{
    printf("Bem vindo!\n\n");

    int variableA, variableB;

    printf("Digite um numero inteiro: ");
    scanf("%i", &variableA);

    printf("Digite outro numero inteiro: ");
    scanf("%i", &variableB);
 
    printf("\n");

    if (variableA == variableB) {
        printf("Atencao! Operacao invalida\n");
        printf("Os numero sao iguais\n");
        printf("\n");
        return system("pause");
    }

    if (variableA > variableB)
    { 
        printf("A - e o maior numero: %i", variableA);
        printf("\n");
        return system("pause \n");
    }
    
    if (!(variableA > variableB))
    {
        printf("B - e o maior numero: %i", variableB);
        printf("\n");
        return  system("pause \n");
    }

    system("pause");

    return 0;
}