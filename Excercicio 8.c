#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int i=0;
int numero;
int opcao;

//Adquirindo dados
printf ("insira um numero inteiro positivo: \n");
printf (" 1 - Coracao \n");
printf (" 2 - Feliz \n");
printf (" 3 - Triste \n");
printf (" 4 - Fofo \n");
scanf ("%i", &opcao);

system ("cls||clear");

//operacao
switch (opcao)
{
case 1:
    printf ("Insira um numero positivo:");
    scanf ("%i", &numero);

    for (i = numero; i >= 0; i--){
        printf("%i <3 \n" ,i);
            }
    break;

case 2:
     printf ("Insira um numero positivo:");
    scanf ("%i", &numero);

    for (i = numero; i >= 0; i--){
        printf ("%i :) \n", i);
    }

case 3:

 printf ("Insira um numero positivo:");
    scanf ("%i", &numero);

    for (i = numero; i >= 0; i--){
        printf ("%i :( \n", i);
    }

case 4:

 printf ("Insira um numero positivo:");
    scanf ("%i", &numero);

    for (i = numero; i >= 0; i--){
        printf ("%i ^_^ \n", i);
    }

default:
    printf ("opcao invalida");
    break;
}


return 0;
}