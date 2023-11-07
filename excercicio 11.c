#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int codigoCerto = 123;
int codigo ;

//operacao
do
{
printf ("Insira seu codigo:");
scanf ("%i", &codigo);

system ("cls||clear");

if (codigo == 123)
{
    printf("-------------SEJA BEM VINDA!!---------- \n");
}
else
{
    printf ("-----------SENHA OU USUARIO INCORRETO!!-------- \n");
}

}while (codigo != codigoCerto);


return 0;
}