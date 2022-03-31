#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
/*Escreva	 um	 programa	 que	 verifique	 a	 validade	 de	 uma	 senha	 fornecida
pelo	 usuário.	 A	 senha	 válida	 é	 o	 número	 1234.	Devem	 ser	impressas	 as
seguintes	mensagens:
ACESSO	PERMITIDO	caso	a	senha	seja	válida.
ACESSO	NEGADO	caso	a	senha	seja	inválida.*/
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
