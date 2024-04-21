#include<stdio.h>
 /*
  Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o 
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, 
sabendo que são descontados 8% para imposto de renda.
 */
int  main(){
    int numerodedias;
     float sala,total_a_ser_pago;
    printf("O numero de dias trabalhados pelo encanador:");
    scanf("%d",&numerodedias);
    sala=45.00-(45.00*8)/100;
    total_a_ser_pago=sala*numerodedias;
    printf("O valor a ser pago pelo funcionario e:%f ",total_a_ser_pago);

   
  
}