#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
/*1- Fa�a um programa que pe�a dois n�meros e verifique (usando if e else) e imprima o maior deles */

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2,n3 ;

    printf("Digite o primeiro n�mero:\n");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero:\n");
    scanf("%d", &n2);

    printf("Digite o terceiro n�mero:\n");
    scanf("%d", &n3);

    if(n1 != n2 && n2 != n3){
        if(n1 > n2 && n1 > n3){
        printf("O maior n�mero �: %d", n1);
       }if(n2 > n3 && n2 > n3){
        printf("O maior n�mero �: %d", n2);
        }if(n3 > n1 && n3 > n2){
        printf("O maior n�mero �: %d", n3);
        }
    }else{
        printf("Os valores s�o iguais");
    }



    printf("\n\n\n");
    return 0;
}
