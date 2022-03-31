#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Escreva	 um	 programa	 para	 ler	 2	 valores	 (considere	 que	 	 não	 serão
//informados	valores	iguais)	e	escrever	o	maior	deles.

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int v1, v2;


    printf("Digite o primeiro valor:\n");
    scanf("%d", &v1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &v2);

    if ( v1 != v2){
        if (v1>v2){
            printf("%d é maior que %d", v1, v2);
        }if(v1<v2){
            printf("%d é maior que %d", v2, v1);
        }
    } else{
        printf("Os valores são iguais");
    }


    printf("\n\n\n");
    return 0;
}
