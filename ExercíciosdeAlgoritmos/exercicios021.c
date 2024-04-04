#include <stdio.h>

/*21) Faça um algoritmo que leia um determinado ano e mostre se ele é ou não 
BISSEXTO. */

int main(){
    int ano;

    printf("digite o ano :");
    scanf("%d",&ano);

    if ((ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 )
    {
      printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

    
}