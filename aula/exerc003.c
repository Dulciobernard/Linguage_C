#include <stdio.h>
/*
4) Escreva um programa que leia um valor de despesa de restaurante, 
e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. 
Assuma que a conta será dividida igualmente
*/

int main(void) {
    float desp,gort,npessoas,quant,div;
    printf("O valor de despesa de restaurante:");
    scanf("%f",&desp);
    printf("\nValor da gorjeta:");
    scanf("%f",&gort);
    printf("\no numero de pessoas para dividir a conta:");
    scanf("%f",&npessoas);
    quant=desp+(desp*gort)/100;
    div=quant/npessoas;
    printf("O valor de despesa de restaurante e:%f.\n",quant);
    printf("O valor  a ser dividido igualmente e:%f.\n",div);


}