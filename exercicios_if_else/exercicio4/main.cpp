#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float amountApple, totalCompra;

    printf("Digite a quantidade de maças:\n");
    scanf("%f", &amountApple);

    if(amountApple>12){
        totalCompra = amountApple * 0.30;
        printf("Total: R$%0.2f", totalCompra);
    }else{
        totalCompra = amountApple * 0.25;
        printf("Total: R$%0.2f", totalCompra);
    }







    printf("\n\n\n");
    return 0;
}
