#include <stdio.h>
/*4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório 
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13.*/
int main(void) {
  int n1,n2,s;
  printf("Digite um valor:");
  scanf("%d",&n1);
  printf("\nDigite outro valor:");
  scanf("%d",&n2);
  s=n1+n2;
  printf("A soma entre %d e %d e igual:%d",n1,n2,s);
}