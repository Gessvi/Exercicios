#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int nota;
int soma;
float media;
int i;

//Adquirindo dados
for (i = 1; i<= 2; i++){
    do
    {
        printf ("Insira a %i nota:", i);
        scanf ("%i", &nota);

    system ("cls||clear");

    } while (nota < 0 || nota > 10);
    
 
   soma += nota;

}

    media = soma/2;

//Exibir dados
printf ("Soma: %i \n", soma);
printf ("media: %.1f \n", media);

return 0;
}