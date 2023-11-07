#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//variavel
int main (){
	setlocale (LC_ALL, "portuguese");

float nota;

//Adquirindo dados 
printf ("Insira sua nota:");
scanf ("%f", &nota);

system ("cls||clear");


//operacao
if (nota >= 9)
{
    printf ("Execelnte");
}
else if (nota >= 7)
{
    printf ("Bom");
}
else if (nota >= 5)
{
    printf ("Razoavel");
}
else
{
    printf ("insuficiente");
}


 








return 0;
}