#include <stdio.h>
/*
15) Crie um programa que leia o número de dias trabalhados em um mês e mostre o 
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 
por hora trabalhada.
*/

int main(){
    int dias,horas;
    float por_horas_trabalhadas,salario;
    printf("digite o numero de dias trabalhado pelo funcionario:");
    scanf("%d",&dias);
    por_horas_trabalhadas=25;
    horas=8;
    salario=(por_horas_trabalhadas*horas)*dias;
    printf("o salário do funcionário e:%.2f",salario);

}