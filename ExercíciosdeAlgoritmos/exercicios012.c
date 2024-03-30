#include <stdio.h>

/*
12) Crie um programa que leia o preço de um produto, calcule e mostre o seu 
PREÇO PROMOCIONAL, com 5% de desconto. 
*/
int main(){
    float precodoproduto,precopromocional;
    printf("Digite  o preco de um produto:");
    scanf("%f",&precodoproduto);
    
    precopromocional=precodoproduto-(precodoproduto*5)/100;

    printf("O VALOR PROMOCIONAL do produto e:%f",precopromocional);
}