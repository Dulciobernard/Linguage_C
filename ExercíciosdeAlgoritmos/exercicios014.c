#include <stdio.h>

/*
14) A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva 
um programa que pergunte a quantidade de Km percorridos por um carro alugado e a 
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, 
sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.
*/

int main(){
    int quantidadededias;
    float quatidadedekmpercorridos,preco_total,custodocarropordia,custoporkm;
    printf("Digite a quantidade de dias pelos quais ele foi alugado");
    scanf("%d",&quantidadededias);
    printf("Digite a quantidade de Km percorridos");
    scanf("%f",&quatidadedekmpercorridos);
    custodocarropordia=90.0;
    custoporkm=0.20;
    preco_total=(quatidadedekmpercorridos*custoporkm)+(quantidadededias*custodocarropordia);

    printf("O valor a ser pago sera:R$%.2f",preco_total);
}