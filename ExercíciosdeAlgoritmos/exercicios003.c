#include <stdio.h>
 /*3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no 
 final uma mensagem.
 Ex:
 Nome do Funcionário: Maria do Carmo
 Salário: 1850,45
 O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.*/
int main(){
    char nome[100];
    float sal;
    
    printf("Nome do Funcionario:");
    scanf("%s", nome);
    
    printf("\nSalario:");
    scanf("%f", &sal);
    
    printf("O funcionario %s tem um salario de %f em Junho.", nome, sal);

    return 0;
}
