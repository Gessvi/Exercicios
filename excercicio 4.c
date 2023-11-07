#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int idade;

//Adquirindo dados
printf ("Insira sua idade:");
scanf ("%i", &idade);

system ("cls||clear");

//Operacao
if (idade >= 18)
{
    printf ("Acesso permitido");
}
else
{
    printf ("Acesso negado");
}



return 0;
}