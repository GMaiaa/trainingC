#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
/*Escreva	 um	 programa	 que	 verifique	 a	 validade	 de	 uma	 senha	 fornecida
pelo	 usu�rio.	 A	 senha	 v�lida	 �	 o	 n�mero	 1234.	Devem	 ser	impressas	 as
seguintes	mensagens:
ACESSO	PERMITIDO	caso	a	senha	seja	v�lida.
ACESSO	NEGADO	caso	a	senha	seja	inv�lida.*/
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float senha;

    printf("Digite a Senha:\n");
    scanf("%f", &senha);

    if(senha == 1234){
        printf("ACESSO PERMITIDO");
    }else{
        printf("ACESSO NEGADO");
    }



    printf("\n\n\n");
    return 0;
}
