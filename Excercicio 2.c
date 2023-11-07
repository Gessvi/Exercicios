#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese");

//variavel
float valorCompra;
float valorFinal;
int dia;
float desconto;
    
//Adquirindo dados 
printf("Informe o valor da sua compra: ");
scanf("%f" ,&valorCompra);

printf("1 - Domingo \n");
printf("2 - Segunda-Feira \n");
printf("3 - Terça - Feira \n");
printf("4 - Quarta-Feira \n");
printf("5 - Quinta-Feira \n");
printf("6 - Sexta-Feira \n");
printf("7 - Sabado \n");
printf("Informe o dia de hoje: ");
scanf("%i" ,&dia);

system("cls || clear");

//operacao
switch (dia) {
        
case 1:
            
    if(valorCompra > 100){

    desconto = 0.15;
    valorFinal = valorCompra - desconto;

    printf("Total da compra com desconto: R$%.2f \n" ,valorFinal);
    printf("Dia de hoje: DOMINGO");

} else {

    printf("Valor da compra: %.2f \n" ,valorCompra);
    printf("Dia de hoje: DOMINGO \n");

}
    break;
        
case 2:

        if(valorCompra > 100){
        desconto = 0.10;
        valorFinal = valorCompra - desconto;
            
        printf("Total da compra com cesconto: %.2f \n" ,valorFinal);
        printf("Dia de hoje: SEGUNDA-FEIRA \n" );

}else {
        printf("Valor da compra: %.2f \n" ,valorCompra);
        printf("Dia de hoje: SEGUNDA-FEIRA \n" );
}    
    break;
        
case 3:

    if (valorCompra > 100){
    desconto = 0.10;
    valorFinal = valorCompra - desconto;
            
    printf("Total da compra com desconto: %.2f \n" ,valorFinal);
    printf("Dia de hoje: TERÇA-FEIRA \n" );
}else {

        printf("Valor da compra: %.2f \n" ,valorCompra);
        printf("Dia de hoje: TERÇA-FEIRA \n" );

    }
    break;
        
case 4:

    if(valorCompra > 100){
    desconto = 0.10;
    valorFinal = valorCompra - desconto;
            
    printf("Total da compra com desconto: %.2f \n" ,valorFinal);
    printf("Dia de hoje: QUARTA-FEIRA \n" );

} else {
            printf("Valor da compra: %.2f \n" ,valorCompra);
            printf("Dia de hoje: QUARTA-FEIRA \n" );
}
break;
        
case 5:

if (valorCompra > 100){
    desconto = 0.10;
    valorFinal = valorCompra - desconto;
            
    printf("Total da compra com desconto: %.2f \n" ,valorFinal);
        printf("Dia de hoje: QUINTA-FEIRA \n" );

} else {

        printf("Valor da compra: %.2f \n" ,valorCompra);
         printf("Dia de hoje: QUINTA-FEIRA \n" );

        }
    break;
        
case 6:

    if(valorCompra > 100){
    desconto = 0.10;
    valorFinal = valorCompra - desconto;
            
    printf("Total da compra com Desconto: %.2f \n" ,valorFinal);
    printf("Dia de hoje: SEXTA-FEIRA \n" );

} else {

     printf("Valor da compra: %.2f \n" ,valorCompra);
    printf("Dia de hoje: SEXTA-FEIRA \n" );

     }
    break;
        
case 7:

    if(valorCompra > 100){
    desconto = 0.15;
    valorFinal = valorCompra - desconto;

    printf("Total da compra com desconto: %.2f \n" ,valorFinal);
    printf("Dia de hoje: SABADO");

 } else {

    printf("Valor da compra: %.2f \n" ,valorCompra);
    printf("Dia de hoje: SABADO \n");
}

    default:

    printf("Opção invalida!");

    break;
        
}
  

return 0;
}