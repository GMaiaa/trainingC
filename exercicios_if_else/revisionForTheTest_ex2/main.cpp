#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
/*1- Fa�a um programa que verifique (usando if e else) se uma letra digitada � �F� ou �M�. Conforme a letra escrever: F � Feminino, M- Masculino, Sexo inv�lido.  */

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    char sexo;

    printf("Digite a inicial do seu sexo:\n");
    scanf("%c", &sexo);

    if(sexo == 'F'|| sexo == 'M'){
        if(sexo == 'F'){
          printf("O seu sexo � Feminino");
        } if (sexo == 'M'){
          printf("O seu sexo � Masculino");
        }
    }else{
       printf("Sexo inv�lido.");
    }



    printf("\n\n\n");
    return 0;
}
