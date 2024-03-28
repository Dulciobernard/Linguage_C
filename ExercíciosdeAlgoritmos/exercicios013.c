#include <stdio.h>
/*
13) Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o 
seu novo salário, com 15% de aumento. 
*/
int main(){
    float salario,novosalario;
    printf("Digite o seu salario:");
    scanf("%f",&salario);

    novosalario=salario+(salario*15)/100;

    printf("O novo salario e:%f",novosalario);
}