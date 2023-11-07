#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int codigo;

//Adquirindo dados
printf ("Insira o codigo: \n");
printf ("1 - Camiseta \n");
printf ("2 - Calca \n");
printf ("3 - Sapato \n");
scanf ("%i", &codigo);

system ("cls||clear");

//operacao
switch (codigo)
{
case 1:
    printf ("==Camiseta== \n");
    printf ("R$ 20,00");
    break;

case 2:
printf ("==Calca== \n");
printf ("R$70,00");
break;

case 3:
printf ("==Sapato== \n");
printf ("R$100,00");
break;
default:
    printf ("Opcao invalida");
    break;
}



return 0;
}