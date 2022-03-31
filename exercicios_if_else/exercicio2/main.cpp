#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e
escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poderá	 ou	 não	 votar	 este	 ano
(não	é	necessário	considerar	o	mês	em	que	ela	nasceu).*/

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int anoNascimento, idade;



    printf("Digite o ano que você nasceu: \n ");
    scanf("%d", &anoNascimento);

    idade = 2022 - anoNascimento;

    if(idade<18){
        if(idade>16 && idade<18){
        printf("Como você possui %d anos, você pode votar mas não é obrigatório.", idade);
        } if(idade < 16 ){
        printf("Como você possui %d anos, você não pode votar", idade);
        }
    } else{
        printf("Você pode votar.");
    }


    printf("\n\n\n");
    return 0;
}
