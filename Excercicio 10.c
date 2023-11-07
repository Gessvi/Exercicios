#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int numero1;
int numero2;
int soma,subtracao;
int opcao;

//Adquirindo dados
printf ("Insira o primeiro numero:");
scanf ("%i", &numero1);

printf ("Insira o segundo numero:");
scanf ("%i", &numero2);

printf ("Insira opcao desejada:");
scanf ("%i", &opcao);
printf ("1 - SOMA");
printf ("2 - SUBTRACAO");

 system ("cls||clear");
//operacao

switch (opcao)
{
case 1:
    printf ("Primeiro numero: %i \n", numero1);
    printf ("Segundo numero: %i \n", numero2);

    soma = numero1 + numero2;
    
    printf ("soma: %i \n", soma);
    break;
case 2:
     printf ("Primeiro numero: %i \n", numero1);
    printf ("Segundo numero: %i \n", numero2);

    subtracao = numero1 - numero2;

     printf ("Subtracao: %i \n", subtracao);
    break;
default:
    printf ("Opcao invalida");
    break;

}

//Exibindo dados
 //printf ("soma: %i \n", soma);
//printf ("Subtracao: %i \n", subtracao);

return 0;
}