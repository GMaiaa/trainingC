#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
/*1- Faça um programa que verifique (usando if e else) se uma letra digitada é “F” ou “M”. Conforme a letra escrever: F – Feminino, M- Masculino, Sexo inválido.  */

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    char sexo;

    printf("Digite a inicial do seu sexo:\n");
    scanf("%c", &sexo);

    if(sexo == 'F'|| sexo == 'M'){
        if(sexo == 'F'){
          printf("O seu sexo é Feminino");
        } if (sexo == 'M'){
          printf("O seu sexo é Masculino");
        }
    }else{
       printf("Sexo inválido.");
    }



    printf("\n\n\n");
    return 0;
}
