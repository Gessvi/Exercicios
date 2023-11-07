#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int temperatura;

//Adquirindo dados
printf ("Insira a temperatura desejada:");
scanf ("%i", &temperatura);

system ("cls||clear");

//operação

if (temperatura < 15)
{
    printf ("chuvoso");
}
else if (temperatura > 25)
{
    printf ("ensolarado");
}
else
{
    printf ("nublado");
}






return 0;
}