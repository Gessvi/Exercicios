#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int codigo;
int numero;
int i;
int resultado = 0;

//Adquirindo dados
printf("Digite um numero positivo:\n ");
    scanf("%i" ,&numero); 
    printf("1 - NUMERO PRIMO \n");
    printf("2 - ENCERRAR PROCESSO \n");
    printf("Digite um dos codigos: \n");
    scanf("%i" ,&codigo);

    system("cls || clear");

//Operacao
    switch (codigo) {
        
        case 1:
        for (i = 2; i <= numero / 2; i++)
        {
            if (numero % i == 0)
            {
                resultado++;
                break;
            }
            
        }

        if (resultado == 0)
        {
            printf("Numero escolhido: %i \n" ,numero);
            printf("E um numero primo \n");
        } else {
            printf("Numero escolhido: %i \n" ,numero);
            printf("Nao e um Numero primo \n");
        }
            
        break;
        
        case 2:
            printf("Numero escolhido: %i \n" ,numero);
            
        break;

        default:
            printf("Opcao invalida");
        break;
    }
        


return 0;
}