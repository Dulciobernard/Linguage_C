#include <stdio.h>
       /*
3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma 
variável auxiliar

*/
int main(void) {
    int a,b;
    printf("\nDigite o valor de a:");
    scanf("%d",&a);
    printf("\nDigite o valor de b:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
   
    
     printf("O valor de a: %d\n",a);
     printf("O valor de b: %d",b);
    
    }