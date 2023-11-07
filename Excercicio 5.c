#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int opcao;

//Adquirindo dados
printf ("Escolha uma das opcaoes: \n");
printf ("1 - INGLES \n");
printf ("2 - ESPANHOL \n");
printf ("3 - FRANCES \n");
scanf ("%i", &opcao);

system ("cls||clear");

//operacao
switch (opcao)
    {
{
case 1:
    printf ("=====Welcome=====");
    break;

case 2:
    printf ("=====Bienvenido=====");
    break;
 
 case 3:
    printf ("=====Accueillir=====");
    break;
    default:
    printf ("====Opcao invalida====");
        break;
    }
}





return 0;
}