#include <stdio.h>
/*
Faça um programa que leia um número inteiro e mostre o seu antecessor e seu 
sucessor.
*/
int main (){
    int n,sucessor,antecessor;
    printf("digite um numero:");
    scanf("%d",&n);

    sucessor=n+1;
    antecessor=n-1;
    printf("O antecessor de %d e %d\n",n,antecessor);
    printf("O sucessor de %d e %d",n,sucessor);

}