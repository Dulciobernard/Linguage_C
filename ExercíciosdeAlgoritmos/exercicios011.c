#include <stdio.h>

/*
11) Desenvolva uma lógica que leia os valores de A, B e C de uma equação do 
segundo grau e mostre o valor de Delta.
*/
int main(){
    int A,B,C,Delta;

    printf("Digite de A:");
    scanf("%d",&A);
    printf("Digite de B:");
    scanf("%d",&B);
    printf("Digite de C:");
    scanf("%d",&C);
    Delta=(B*B)-4*A*C;
    printf("O valor de delta e :%d",Delta);
}