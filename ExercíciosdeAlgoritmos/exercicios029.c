#include <stdio.h>
/*
29) Desenvolva um programa que leia o nome de um funcionário, seu salário,
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de
acordo com a tabela a seguir:
 - Até 3 anos de empresa: aumento de 3%
 - entre 3 e 10 anos: aumento de 12.5%
 - 10 anos ou mais: aumento de 20%

*/
 int main(){
    char funcionario[50]= "";
    float salario,salarioreajustado;
    int Quantidadedeanos;
    printf("Digite o nome do funcionário:");
    scanf("%s", funcionario);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
    printf("Digite quantos anos o funcionário trabalha na empresa:");
    scanf("%d",&Quantidadedeanos);


    if (Quantidadedeanos <= 3)
    {
      salarioreajustado=salario+(salario*3)/100;
      printf("O salario do %s reajustado e:%f",funcionario,salarioreajustado);
    } else if (salario < 10)
    {
      salarioreajustado=salario+(salario*12.5)/100;
      printf("O salario do %s reajustado e:%f",funcionario,salarioreajustado);
    }else{
        salarioreajustado=salario+(salario*20)/100;
        printf("O salario do %s reajustado e:%f",funcionario,salarioreajustado);
    }
    
    
    
 }