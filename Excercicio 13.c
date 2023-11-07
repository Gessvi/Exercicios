#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int nUm, nDois;
int maior;
int menor;

//Adquirindo dados
printf ("Informe o primeiro numero: ");
scanf ("%i", &nUm);

printf ("Informe o segundo numero: ");
scanf ("%i", &nDois);

//operacao
maior = nUm > nDois ? nUm : nDois;
menor = nUm < nDois ? nUm : nDois;

//Exibindo dos dados
printf ("Numero Um %i \n", nUm);
printf ("Numero Dois: %i \n", nDois);
printf ("Maior valor: %i \n", maior);
printf ("Menor valor: %i \n", menor);


return 0;
}