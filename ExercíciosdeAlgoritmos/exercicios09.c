#include <stdio.h>
/*
9) Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) 
e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.
*/
int main (){
    float real,dolar;
  printf("digite o valor da tua carteira em real:");
  scanf("%f",&real);
   
   dolar=real/ 3.45;

   printf("O valor em dolar e:%.2f.",dolar);

}