#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int codigo;

//Adquirindo dados
printf ("Escolha uma das opcoes abaixo: \n");
printf ("1 - NOVO JOGO \n");
printf ("2 - CARREGAR JOGO \n");
printf ("3 - CONFIGURACOES \n");
scanf ("%i", &codigo);

system ("cls||clear");

//operacao
switch (codigo)
{
case 1:
    printf ("CARREGANDO........");
    break;

case 2:
    printf ("CARREGANDO NOVO JOGO........");
break;

case 3:
    printf ("PERFIL \n");
    printf ("CONTROLE \n");
    printf ("SOM \n");
    printf ("SAIR DAS CONFIGURACOES \n");
    break;

default:
    printf ("Opcao invalida");
    break;
}



return 0;
}