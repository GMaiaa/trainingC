#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
/*1- Faça um programa que peça dois números e verifique (usando if e else) e imprima o maior deles */

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Digite o primeiro número:\n");
    scanf("%d", &n1);

    printf("Digite o segundo número:\n");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O maior número é: %d", n1);
    }else{
        printf("O maior numero é: %d", n2);
    }



    printf("\n\n\n");
    return 0;
}
