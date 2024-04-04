#include <stdio.h>

/*20) Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou 
ÍMPAR.*/

int main(){
    int n;
    printf("digite um numero:");
    scanf("%d",&n);
    if (n % 2 == 0)
    {
      printf("O Numero e PAR");
    }else{
         printf("O  Numero e IMPAR");
    }
    
}