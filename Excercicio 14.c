#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
int numero;
float mediaPares = 0;
float mediaImpares = 0;
int contadorPar= 0;
int contadorImpar = 0;
int somaPares = 0;
int somaImpares = 0;
    
//operacao
    do {
    printf("Ingite um numero: ");
    scanf("%d" ,&numero);

    if (numero > 0)
    {
    if(numero % 2 == 0){
                
    somaPares += numero;
    contadorPar++;
            
    }else{
    somaImpares += numero;
    contadorImpar++;
     }
    
            
    }            
} while (numero > 0);

    system("cls || clear");
        
mediaPares = somaPares/ (float) contadorPar;
mediaImpares = somaImpares/ (float) contadorImpar;

//Exibir dados  
printf("Numeros pares %i \n" ,contadorPar);
printf("Numeros impares %i \n" ,contadorImpar);
printf("Media dos pares: %.1f \n" ,mediaPares);
printf("Media dos impares: %.1f \n" ,mediaImpares);


return 0;
}