#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e
escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poder�	 ou	 n�o	 votar	 este	 ano
(n�o	�	necess�rio	considerar	o	m�s	em	que	ela	nasceu).*/

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int anoNascimento, idade;



    printf("Digite o ano que voc� nasceu: \n ");
    scanf("%d", &anoNascimento);

    idade = 2022 - anoNascimento;

    if(idade<18){
        if(idade>16 && idade<18){
        printf("Como voc� possui %d anos, voc� pode votar mas n�o � obrigat�rio.", idade);
        } if(idade < 16 ){
        printf("Como voc� possui %d anos, voc� n�o pode votar", idade);
        }
    } else{
        printf("Voc� pode votar.");
    }


    printf("\n\n\n");
    return 0;
}
