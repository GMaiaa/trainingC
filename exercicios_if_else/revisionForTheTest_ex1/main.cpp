#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
/*1- Fa�a um programa que pe�a dois n�meros e verifique (usando if e else) e imprima o maior deles */

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Digite o primeiro n�mero:\n");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero:\n");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O maior n�mero �: %d", n1);
    }else{
        printf("O maior numero �: %d", n2);
    }



    printf("\n\n\n");
    return 0;
}
